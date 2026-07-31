/* 
    Date: 2026-07-31 | Time: 10:38
    Author: Muhammad Dilawar

    File: Exercise 11 Function Pointer.cpp
    Description: Exercise 11: Function Pointer
    Practice Problem: Create a function pointer that points to a simple function, for example, a function that returns the larger of two integers. Use the function pointer to call the target function and print the result.

    Given:
    int x = 45, y = 90;
    
    Expected Output:
    Using function pointer, max of 45 and 90 is: 90
*/

// g++ "Exercise 11 Function Pointer.cpp" -o "Exercise 11 Function Pointer" && ./"Exercise 11 Function Pointer"
#include<iostream>
using namespace std;

int larger(int &a, int &b){
    if (a > b) return a;
    else return b;
}

int main(){
    int x = 45, y = 90;
    
    // 1. Function Pointer Declaration & Assignment
    int (*funcPtr)(int&, int&) = larger;

    cout << "Using function pointer, max of " << x << " and " << y << " is: " << larger(x, y) << endl;
    cout << endl;
    return 0;
}