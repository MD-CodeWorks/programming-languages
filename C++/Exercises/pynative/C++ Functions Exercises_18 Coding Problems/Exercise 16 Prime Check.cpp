/*
    Date: 2026-08-07 | Time: 23:09
    Exercise 16: Prime Check
    Practice Problem: Write a function is_prime(int n) that returns true if n is a prime number (only divisible by 1 and itself, n is greater than 1), and false otherwise. Use this function in your main function to print all prime numbers between 1 and 20.

    Expected Output:
    Prime numbers between 1 and 20:
    2 3 5 7 11 13 17 19
*/

// g++ "Exercise 16 Prime Check.cpp" -o "Exercise 16 Prime Check" && ./"Exercise 16 Prime Check"

#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 20;
    cout << "Prime numbers between 1 and " << n << ":" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}