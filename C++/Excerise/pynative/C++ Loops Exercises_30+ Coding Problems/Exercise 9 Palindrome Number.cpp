/* 
    Date: 2026-07-11 | Time: 10:19
    Author: Muhammad Dilawar

    File: Exercise 9 Palindrome Number.cpp
    Description: Exercise 9: Palindrome Number
    Practice Problem: Write a C++ program that determines whether a given integer is a palindrome (i.e., it reads the same forwards and backwards).

    Given:

    int N = 121;
    Expected Output:

    121 is a palindrome.
*/

// g++ "Exercise 9 Palindrome Number.cpp" -o "Exercise 9 Palindrome Number" && ./"Exercise 9 Palindrome Number"
#include<iostream>
using namespace std;
int main(){
    int N = 121;
    int temp = N, digit, revNum = 0;

    while (temp > 0){
        digit = temp % 10;
        temp /= 10;
        revNum = revNum * 10 + digit;
    }
    if(revNum == N){
        cout << N << " is a Palindrome." << endl;
    }
    else cout << "This is not Palinrome." << endl;

    cout << endl;
    return 0;
}