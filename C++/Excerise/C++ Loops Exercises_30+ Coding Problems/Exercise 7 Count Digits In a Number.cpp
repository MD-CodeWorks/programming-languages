/* 
    Date: 2026-07-10 | Time: 06:05
    Author: Muhammad Dilawar

    File: Exercise 7 Count Digits In a Number.cpp

    Description: Exercise 7: Count Digits In a Number

    Practice Problem: Develop a C++ program that counts the total number of digits it contains using a while loop.

    Given:

    long long number = 7568;
    Expected Output:

    Enter an integer: 7568 
    The number 7568 has 4 digits.
*/

// g++ "Exercise 7 Count Digits In a Number.cpp" -o "Exercise 7 Count Digits In a Number" && ./"Exercise 7 Count Digits In a Number"
#include<iostream>
using namespace std;
int main(){
    long long number = 7568;
    int count = 0;
    int temp = number;
    while (temp > 0){
        temp /= 10;
        count++;
    }

    cout << "Enter an integer: " << number << endl;
    cout << "The number " << number << " has " << count << " digits." << endl;
    return 0;
}