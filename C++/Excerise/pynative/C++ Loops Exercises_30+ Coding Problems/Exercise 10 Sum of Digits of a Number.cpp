/* 
    Date: 2026-07-11 | Time: 10:36
    Author: Muhammad Dilawar

    File: Exercise 10 Sum of Digits of a Number.cpp
    Description: Exercise 10: Sum of Digits of a Number
    Practice Problem: Write a C++ program that calculates the sum of all digits of a number using a loop.

    Given:
    int N = 1234;
    Expected Output:
    The sum of the digits of 1234 is: 10
*/

// g++ "Exercise 10 Sum of Digits of a Number.cpp" -o "Exercise 10 Sum of Digits of a Number" && ./"Exercise 10 Sum of Digits of a Number"
#include<iostream>
using namespace std;
int main(){
    int N = 1234, digit = 0, revNum = 0;
    int temp = N;
    while (temp > 0){
        digit = temp % 10;
        revNum = revNum + digit;
    }
    cout << "the sum of the difits of " << N << " is: " << revNum << endl;
    cout << endl;
    return 0;
}