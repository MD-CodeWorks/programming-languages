console.log("Mehtod 1");
let num_list = [10, 20, 33, 46, 55];
let result = []
for (let i = 0; i < num_list.length; i++){
    if(num_list[i] % 5 == 0){
        result.push(num_list[i]);
    }
}

console.log("Divisible by 5:");
console.log(result.join(", "));

console.log("Mehtod 2");
const num1_list = [10, 20, 33, 46, 55];
let output = " ";

for (let i = 0; i < num1_list.length; i++){
    if(num1_list[i] % 5 === 0){
        output += num1_list[i] + ", ";
    }
}

console.log("Divisible by 5:");
console.log(output);