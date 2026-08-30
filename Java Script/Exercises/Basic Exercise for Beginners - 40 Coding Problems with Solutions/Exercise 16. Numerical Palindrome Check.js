let number1 = 121;
let number2 = 125;

function palindrome(num){
    let orginalNum = num;
    let reversed = 0;
    while(num > 0){
        let lastdigit = num % 10;
        num = Math.floor(num / 10);
        reversed = (reversed * 10) + lastdigit;
    }
    if(orginalNum === reversed){
        console.log(`Number ${orginalNum} is palindrome number`);
    }
    else {
        console.log(`Number ${orginalNum} is not palindrome number`);
    }
}

palindrome(number2);
palindrome(number1);