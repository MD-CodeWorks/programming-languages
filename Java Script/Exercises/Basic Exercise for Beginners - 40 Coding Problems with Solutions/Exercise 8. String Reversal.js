let text = "JavaScript";
let text_rev = "";
for (let i = text.length - 1; i >= 0 ; i--){
    text_rev += text[i];
}
console.log("Reversed: ", text_rev);