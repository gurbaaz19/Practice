console.log(5 + 6);

//Comment

/*
Comment
*/

let x = 5;
var y = 6;
y = 4;
const z = 6;

console.log(typeof x);
x = "Gurbaaz";
console.log(typeof x);

let persons = "John Doe",
  carName = "Volvo",
  price = 200;

var a = "5" + 2 + 3;
let k = 2 + 3 + "5";

console.log(a, k);

a = 123e5;
y = 123e-5;
console.log(a, y);

const cars = ["Saab", "Volvo", "BMW"];
console.log(cars);

const person = {
  firstName: "John",
  lastName: "Doe",
  age: 50,
  eyeColor: "blue",
};
console.log(person,person.age,person['age'], typeof person);

console.log(myFunction(3,4));

function myFunction(p1, p2) {
    return p1 * p2;   // The function returns the product of p1 and p2
  }