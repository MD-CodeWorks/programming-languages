const nums = [45, 2, 89, 12, 7];

let largest  = nums[0];
let smallest = nums[0];

for ( let i = 0; i < nums.length; i++ ){
    if (largest < nums[i]){
        largest = nums[i];
    }
    if (smallest > nums[i]){
        smallest = nums[i];
    }
}

console.log("Largest:", largest, "Smallest:", smallest);