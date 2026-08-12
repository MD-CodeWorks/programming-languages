function check(num){
        if (num[0] === num[num.length-1]){
            return true;
        }
        return false;
}

const numbers_y = [75, 65, 35, 75, 30];
const numbers_x = [10, 20, 30, 40, 10];

console.log("Given array:", numbers_y, "| result is", check(numbers_y));
console.log("Given array:", numbers_x, "| result is", check(numbers_x));
