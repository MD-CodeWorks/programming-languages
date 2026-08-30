let fruits = ["apple", "banana", "cherry", "date", "elderberry"];

console.log("Orginal Array: ", fruits);

fruits.push("fig");
console.log("After adding new fruit: ", fruits);

fruits.splice(1, 1);
console.log("After deleting index 1 element: ",fruits);