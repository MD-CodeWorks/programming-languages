console.log("Printing current and previous number sum in a range(10)");
        let previousNumber = 0;
        for (let currentNumber = 0; currentNumber < 10; currentNumber++) {
            let sum = currentNumber + previousNumber;
            console.log("Current Number", currentNumber, "Previous Number", previousNumber, "sum: ", sum);
            previousNumber = currentNumber;
        }