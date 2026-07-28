/*
    Date: 2026-07-18 | Time: 07:51
    Author: Muhammad Dilawar

    File: Exercise 19 Check Prime Number.cpp
    Description: Exercise 19: Check Prime Number
    Practice Problem: Write a C++ program that uses a loop to determine whether N is a prime number.

    Prime number is a whole number greater than 1 that cannot be exactly divided by any whole number other than itself and 1 (e.g. 2, 3, 5, 7, 11).

    Given:
    int N = 11;

    Expected Output:
    11 is a prime number.

*/

// g++ "Exercise 19 Check Prime Number.cpp" -o "Exercise 19 Check Prime Number" && ./"Exercise 19 Check Prime Number"
#include <iostream>
using namespace std;
int main()
{
    int N = 13;
    bool isPrime = true;

    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == false)
        cout << "This is not Prime Number." << endl;
    else
        cout << "This is a Prime Number." << endl;
    cout << endl;
    return 0;
}