/* 
    Date: 2026-07-24 | Time: 09:48
    Author: Muhammad Dilawar

    File: Exercise 8 Recursive Function.cpp
    Description: Exercise 8: Recursive Function
    Practice Problem: Write a recursive function factorial(int n) to calculate n! (n factorial). Recall that n! = n * (n-1) *...*1, and the base case is 0! = 1.

    To find the factorial of a number, you multiply it by every positive integer smaller than it until you reach 1.  For example, 5! =5×4×3×2×1=120

    Given:
    int N = 5;

    Expected Output:
    5! is: 120
*/

// g++ "Exercise 8 Recursive Function.cpp" -o "Exercise 8 Recursive Function" && ./"Exercise 8 Recursive Function"
#include<iostream>
using namespace std;

long long factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int num = 5;
    long long result = factorial(num);
    cout << num << "! is: " << result << endl;
    cout << endl;
    return 0;
}