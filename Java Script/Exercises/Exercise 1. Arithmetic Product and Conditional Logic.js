function Product(number1, number2) {
            let result = number1 * number2;
            if (result <= 1000) {
                return result;
            }
            else return number1 + number2;
        }
        console.log("The result is ", Product(20, 30));
        console.log("The result is ", Product(40, 30));