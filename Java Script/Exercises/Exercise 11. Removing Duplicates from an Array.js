const data = [1, 2, 2, 3, 4, 4, 4, 5];
const unique = [];
for (let i = 0; i < data.length; i++){
        if (!unique.includes(data[i])){
            unique.push(data[i]);
    }
}
console.log("Unique Element: ", unique);