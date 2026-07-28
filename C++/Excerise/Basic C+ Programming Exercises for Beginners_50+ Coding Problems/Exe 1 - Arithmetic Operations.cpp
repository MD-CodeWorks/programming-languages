/*
    Exercise 1: Arithmetic Operations
    Practice Problem: Write a C++ program that takes two integer inputs from the user. Calculate and display the sum, difference, product, and integer quotient of these two numbers.

    Expected Output:

    Enter the first integer: 20
    Enter the second integer: 10

    Results:
    Sum: 30
    Difference: 10
    Product: 200
    Quotient (Integer Division): 2
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter your two num: ";
    cin >> num1, num2;

    int sum = 0, difference = 0, product = 0, Quotient = 0;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    Quotient = num1 / num2;

    cout << "Your sum is: " << sum << endl;
    cout << "Your Difference is: " << difference << endl;
    cout << "Your product is: " << product << endl;
    cout << "Your Quotient is : " << Quotient << endl;

    return 0;
}