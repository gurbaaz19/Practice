function sum(x, y, z) {
  console.log(x + y + 2 * z);
}

//Other ways to define

// const sum= function (x, y, z) {
//     console.log(x + y + 2 * z);
//   }

//   const sum= (x, y, z) => {
//     console.log(x + y + 2 * z);
//   }

for (let p = 3; p < 10; p += 1) {
  sum(p, 0, 8);
}
