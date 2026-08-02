/*
    Date: 2026-07-15 | Time: 08:33
    Author: Muhammad Dilawar

    File: Exercise 14 GCD (HCF) of Two Numbers.cpp
    Description: Exercise 14: GCD (HCF) of Two Numbers
    Practice Problem: Given a two positive integers, A and B. Write a C++ program to find their Greatest Common Divisor (GCD), also known as the Highest Common Factor (HCF), using a loop.

    Given:
    int A = 5, B = 10;
    Expected Output:
    The GCD (HCF) of 5 and 10 is: 5

*/

// g++ "Exercise 14 GCD (HCF) of Two Numbers.cpp" -o "Exercise 14 GCD (HCF) of Two Numbers" && ./"Exercise 14 GCD (HCF) of Two Numbers"
#include <iostream>
using namespace std;
int main()
{
    int A = 5, B = 10;
    int Greater = 0;
    if (A > B)
    {
        Greater = B;
    }
    else
        Greater = A;

    for (int i = Greater; i >= 1; i--)
    {
        if (A % i == 0 && B % i == 0)
        {
            cout << "The GCD (HCF) of " << A << " and " << B << " is: " << i << endl;
            break;
        }
    }

    cout << endl;
    return 0;
}