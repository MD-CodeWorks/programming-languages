/*
    Date: 02-07-2026

    Exercise 4: Separate Even/Odd Sums
    Practice Problem: Write a C++ program that calculates and displays the separate sums of all even numbers and all odd numbers between 1 and N (inclusive).


    Given:

    int N = 10;
    Expected Output:

    Results up to 10:
    Sum of even numbers: 30
    Sum of odd numbers: 25
*/

// g++ "Exercise 4 Separate Even_Odd Sums.cpp" -o "Exercise 4 Separate Even_Odd Sums" && ./"Exercise 4 Separate Even_Odd Sums"
#include <iostream>
using namespace std;
int main()
{
    int N = 10, Esum = 0, Osum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            Esum = Esum + i;
        }
        else
        {
            Osum = Osum + i;
        }
    }
    cout << "Results up to 10:" << endl;
    cout << "Sum of even numbers: " << Esum << endl;
    cout << "Sum of odd numbers: " << Osum << endl;

    return 0;
}