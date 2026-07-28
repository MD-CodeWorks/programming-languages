/* 
    Date: 2026-07-16 | Time: 07:34
    Author: Muhammad Dilawar

    File: Exercise 15 LCM of Two Numbers.cpp
    Description: Exercise 15: LCM of Two Numbers
    Practice Problem: Given a for two positive integers, A and B. Write a C++ program that finds their Least Common Multiple (LCM) using loops.

    Given:
    int A = 45, B = 10;
    Expected Output:
    The LCM of 45 and 10 is: 90

*/

// g++ "Exercise 15 LCM of Two Numbers.cpp" -o "Exercise 15 LCM of Two Numbers" && ./"Exercise 15 LCM of Two Numbers"
#include<iostream>
using namespace std;
int main(){
    int A = 45, B = 10;
    int largest_num = 0;
    if (A > B){
        largest_num = A;
    }
    else largest_num = B;

    int i = largest_num;
    while (true)
    {
        if(i % A == 0 && i % B == 0){
            cout << "The LCM of " << A << " and " << B << " is: " << i << endl;
            break;
        }
        i++;
    }

    cout << endl;
    return 0;
}