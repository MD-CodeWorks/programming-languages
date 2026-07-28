/*
    Date: 2026-07-19 | Time: 09:56
    Author: Muhammad Dilawar

    File: Exercise 29 Number Pattern (Inverted Right Triangle of Decreasing Numbers).cpp
    Description: Exercise 29: Number Pattern (Inverted Right Triangle of Decreasing Numbers)
    Practice Problem: Given an integer N. Write a C++ program that uses nested loops to print an inverted right-angled number triangle where the i-th row starts at N and decreases to i.

    Given:
    int N = 4;

    Expected Output:
    Height (N) for the inverted decreasing number pattern: 4
    4
    4 3
    4 3 2
    4 3 2 1
*/

// g++ "Exercise 29 Number Pattern (Inverted Right Triangle of Decreasing Numbers).cpp" -o "Exercise 29 Number Pattern (Inverted Right Triangle of Decreasing Numbers)" && ./"Exercise 29 Number Pattern (Inverted Right Triangle of Decreasing Numbers)"
#include <iostream>
using namespace std;
int main()
{
    int N = 4;
    cout << "Height (" << N << ") for the inverted decreasing number pattern: " << N << endl;

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}