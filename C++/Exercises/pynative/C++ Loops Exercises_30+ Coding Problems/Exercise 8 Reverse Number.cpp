/* 
    Date: 2026-07-10 | Time: 06:32
    Author: Muhammad Dilawar

    File: Exercise 8 Reverse Number.cpp
    Description: 
    Exercise 8: Reverse Number
    Practice Problem: Write a C++ program to reverse a integer number using a loop.

    Given:

    int N = 7568;
    Expected Output:

    The reverse of 7568 is: 8657

*/

// g++ "Exercise 8 Reverse Number.cpp" -o "Exercise 8 Reverse Number" && ./"Exercise 8 Reverse Number"
#include<iostream>
using namespace std;
int main(){
    int N = 7568, revNum = 0, digit;
    int temp = N;
    while (temp > 0){
        digit = temp % 10;
        temp /= 10;        
        revNum = revNum * 10 + digit;
    }
    cout << "The reverse of " << N << " is: " << revNum;
    cout << endl;
    return 0;
}