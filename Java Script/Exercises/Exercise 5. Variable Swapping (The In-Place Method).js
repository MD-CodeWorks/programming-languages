let a = 5;
let b = 10;

console.log("Before Swap: a = ", a , ", b = ", b);

// Method 1
// [a, b] = [b, a];

// Method 2
a = a + b;
b = a - b;
a = a - b;

console.log("After Swap: a = ", a , ", b = ", b);