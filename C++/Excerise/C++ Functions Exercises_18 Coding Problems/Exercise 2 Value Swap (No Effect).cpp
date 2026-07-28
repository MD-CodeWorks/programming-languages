/*
    Date: 2026-07-20 | Time: 09:46
    Author: Muhammad Dilawar

    File: Exercise 2 Value Swap (No Effect).cpp
    Description: Exercise 2: Value Swap (No Effect)
    Practice Problem: Write a function swap_value(int a, int b) that attempts to swap the values of its parameters (a and b) inside the function body. Call this function from main and print the original variables before and after the call to demonstrate that the swap does not affect the original variables in main.

    Given:
    int x = 10, y = 20;

    Expected Output:
    Before call: x = 10, y = 20
    Inside swap_value function: a = 20, b = 10
    After call: x = 10, y = 20

*/

// g++ "Exercise 2 Value Swap (No Effect).cpp" -o "Exercise 2 Value Swap (No Effect)" && ./"Exercise 2 Value Swap (No Effect)"
#include <iostream>
using namespace std;

void swap_value(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    cout << "Inside swap_value function: " << "a = " << a << ", b = " << b << endl;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before Call: " << "x = " << x << ", y = " << y << endl;
    swap_value(x, y);
    cout << "After Call: " << "x = " << x << ", y = " << y << endl;
    cout << endl;
    return 0;
}