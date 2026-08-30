const str = "JavaScript";

console.log("Original String is", str);
console.log("Printing only even index chars");

console.log("Method 1");
for (let i = 0; i < str.length; i++){
    if(i % 2 == 0){
        console.log(str[i])
    }
}

console.log("Method 2");
for (let i = 0; i < str.length; i += 2){
    console.log(str[i]);
}