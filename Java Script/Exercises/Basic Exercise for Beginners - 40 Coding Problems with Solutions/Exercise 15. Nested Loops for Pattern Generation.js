let range = 5;

for (let i = 1; i <= range; i++){
    let row = "";
    for (let j = 1; j <= i; j++){
        row += i + " ";
    }
    console.log(row.trim());
}
