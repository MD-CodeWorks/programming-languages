/* 
    Date: 2026-07-12 | Time: 10:13
    Author: Muhammad Dilawar

    File: Exercise 11 Power of a Number.cpp
    Description: Exercise 11: Power of a Number
    Practice Problem: Develop a C++ program that calculates the value of ab (a raised to the power b), where a is the base and b is a non-negative integer exponent, without using the standard library function pow(). Use a loop to perform the calculation.

    Given:
    int base = 2, exponent = 4;
    Expected Output:
    2 raised to the power of 4 is: 16

*/

// g++ "Exercise 11 Power of a Number.cpp" -o "Exercise 11 Power of a Number" && ./"Exercise 11 Power of a Number"
#include<iostream>
using namespace std;
int main(){
    int base = 2, exponent = 4;

    int power = 1;

    for ( int i = 0; i < exponent; i++ ){
        power = power * base;
    }

    cout << base << " raised to the power of " << exponent << " is: " << power << endl;

    cout << endl;
    return 0;
}