const express = require("express");
const app = express();
const port = 8080;

app.use(express.urlencoded({ extended: true }));
app.use(express.json());

app.get("/register", (req, res) => {
  const { username, password } = req.query;
  res.send(`GET respons! Welcom ${username}`);
});
app.post("/register", (req, res) => {
  const { username, password } = req.body;
  res.send(`POST respons! Welcom ${username}`);
});

app.listen(port, () => {
  console.log(`App is listening on port ${port}`);
});
