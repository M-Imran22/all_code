const mongoose = require("mongoose");

main()
  .then((res) => {
    console.log("connection Success!");
  })
  .catch((err) => console.log(err));

async function main() {
  await mongoose.connect("mongodb://127.0.0.1:27017/test");
}

const userSchema = new mongoose.Schema({
  name: String,
  email: String,
  age: Number,
});

const User = mongoose.model("User", userSchema);
// const Employee = mongoose.model("Employee", userSchema);

User.find({ age: { $gt: 25 } })
  .then((res) => {
    console.log(res);
  })
  .catch((err) => {
    console.log(err);
  });

// User.insertMany([
//   { name: "Tony", email: "tony@gmail.com", age: 55 },
//   { name: "Bruce", email: "bruce@gmail.com", age: 52 },
//   { name: "Peter", email: "peter@gmail.com", age: 25 },
// ]).then((res) => {
//   console.log(res);
// });

// const user2 = new User({
//   name: "M Salman",
//   email: "salman@gmail.com",
//   age: 24,
// });

// user2
//   .save()
//   .then((res) => {
//     console.log(res);
//   })
//   .catch((err) => {
//     console.log(err);
//   });
