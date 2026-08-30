let sentence = "Learning JavaScript is fun!";

let vowels = 'aeiouAEIOU';

let count = 0;

for (const val of sentence){
    for (const ch of vowels){
        if (ch == val){
            count += 1;
        }
    }
}

console.log("Number of vowels: ", count)