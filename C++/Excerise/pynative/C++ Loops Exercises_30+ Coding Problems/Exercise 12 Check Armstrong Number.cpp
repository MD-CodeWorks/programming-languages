/* 
    Date: 2026-07-12 | Time: 10:26
    Author: Muhammad Dilawar

    File: Exercise 12 Check Armstrong Number.cpp
    Description: Exercise 12: Check Armstrong Number
    Practice Problem: Write a C++ program that checks whether a positive integer N is an Armstrong number.

    An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. (Example: 153=13+53+33).

    Given:
    int N = 153;
    Expected Output:
    153 is an Armstrong number.
*/

// g++ "Exercise 12 Check Armstrong Number.cpp" -o "Exercise 12 Check Armstrong Number" && ./"Exercise 12 Check Armstrong Number"
#include<iostream>
using namespace std;
int main(){
    int N = 153, lastDigit = 0;
    int count = 0, temp = N, power, sum = 0;

    while(temp > 0){
        lastDigit = temp % 10;
        temp = temp / 10;
        count++;
    }

    temp = N;
    while (temp > 0){
        lastDigit = temp % 10;
        power = 1;
        for ( int i = 0; i < count; i++){
            power = power * lastDigit;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if (N == sum ){
        cout << N << " is an Armstrong number." << endl;
    }
    else cout << N << " is not an Armstrong number." << endl;

    cout << endl;
    return 0;
}