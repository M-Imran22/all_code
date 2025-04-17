const express = require("express");
const ExpressError = require("./ExpressError");
const app = express();

app.use((req, res, next) => {
  req.time = new Date(Date.now()).toString();
  console.log(req.time);
  next();
});

app.use("/api", (req, res, next) => {
  let { token } = req.query;
  if (token === "giveaccess") {
    next();
  } else res.send("ACCESS DENIND!");
});

app.get("/api", (req, res) => {
  res.send("Important Data");
});

app.get("/", (req, res) => {
  res.send("Hi I'm root");
});
app.get("/random", (req, res) => {
  res.send("This is random page");
});

app.get("/err", (req, res) => {
  asdf = sadfsdf;
});

app.get("/admin", (req, res) => {
  throw new ExpressError(403, "Access to Admin is forbidden");
});

app.use((err, req, res, next) => {
  let { status = 500, massege = "There is a Error" } = err;
  res.status(status).send(massege);
});

// app.get((req, res) => {
//   res.send("Page not found!");
// });

app.listen(8080, () => {
  console.log("Server is running on port 8080");
});
