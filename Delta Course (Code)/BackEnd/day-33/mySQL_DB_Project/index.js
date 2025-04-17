const { faker, el } = require("@faker-js/faker");
const mysql = require("mysql2");
const express = require("express");
const app = express();
const path = require("path");
const methodOverride = require("method-override");
const { v4: uuidv4 } = require("uuid");

app.use(methodOverride("_method"));
app.use(express.urlencoded({ extended: true }));
app.set("view engine", "ejs");
app.set("views", path.join(__dirname, "/views"));

const connection = mysql.createConnection({
  host: "localhost",
  user: "root",
  database: "delta_app",
  password: "",
});

//home route
app.get("/", (req, res) => {
  let q = `SELECT count(*) FROM user`;
  try {
    connection.query(q, (error, result) => {
      if (error) throw error;
      let count = result[0]["count(*)"];
      res.render("home.ejs", { count });
    });
  } catch (error) {
    console.log(error);
    res.send("some error in DB");
  }
});

//show users route
app.get("/user", (req, res) => {
  let q = `SELECT * FROM user`;
  try {
    connection.query(q, (error, users) => {
      if (error) throw error;
      res.render("showusers.ejs", { users });
    });
  } catch (error) {
    console.log(error);
    res.send("some error in DB");
  }
});

//add user route
app.get("/user/newuser", (req, res) => {
  res.render("newuser.ejs");
});

app.post("/user", (req, res) => {
  let { username, email, password } = req.body;
  let id = uuidv4();
  let q = `INSERT INTO user (id,username,email,password) VALUES('${id}','${username}','${email}','${password}')`;

  connection.query(q, (err, result) => {
    if (err) throw err;
    res.redirect("/user");
  });
});

//delete user route
app.get("/user/:id/deleteuser", (req, res) => {
  let { id } = req.params;
  let q = `SELECT * FROM user WHERE id = '${id}'`;
  try {
    connection.query(q, (err, result) => {
      if (err) throw err;
      let user = result[0];
      res.render("delete.ejs", { user });
    });
  } catch (err) {
    console.log(err);
    res.send("some error in DB");
  }
});

app.delete("/user/:id", (req, res) => {
  let id = req.params.id;
  let { email, password } = req.body;
  let q = `SELECT * FROM user WHERE id = '${id}'`;
  connection.query(q, (err, result) => {
    if (err) throw err;
    let user = result[0];
    if (email != user.email || password != user.password) {
      res.send("Wrong email or password");
    } else {
      let q2 = `DELETE FROM user WHERE id = '${id}'`;
      connection.query(q2, (err, result) => {
        if (err) throw err;
        res.redirect("/user");
      });
    }
  });
});

//edit user route
app.get("/user/:id/edit", (req, res) => {
  let { id } = req.params;
  let q = `SELECT * FROM user WHERE id = '${id}'`;
  try {
    connection.query(q, (error, result) => {
      if (error) throw error;
      let user = result[0];
      res.render("edit.ejs", { user });
    });
  } catch (error) {
    console.log(error);
    res.send("some error in DB");
  }
});

//Update (DB) route
app.patch("/user/:id", (req, res) => {
  let { id } = req.params;
  let { password: formPass, username: newUsername } = req.body;
  let q = `SELECT * FROM user WHERE id = '${id}'`;

  try {
    connection.query(q, (err, result) => {
      if (err) throw err;
      let user = result[0];

      if (formPass != user.password) {
        res.send("WRONG password");
      } else {
        let q2 = `UPDATE user SET username = '${newUsername}' WHERE id = '${id}'`;
        connection.query(q2, (err, result) => {
          if (err) throw err;
          res.redirect("/user");
        });
      }
    });
  } catch (err) {
    console.log(err);
    res.send("some error in DB");
  }
});

app.listen("8080", () => {
  console.log("app is listing on port: 8080");
});
