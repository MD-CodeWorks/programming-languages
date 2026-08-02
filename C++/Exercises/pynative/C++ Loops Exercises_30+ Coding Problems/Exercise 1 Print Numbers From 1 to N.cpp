/*
    Date: 2026-07-10 | Time: 05:35
    Author: Muhammad Dilawar

    Exercise 1: Print Numbers From 1 to N
    Practice Problem: Develop a C++ program that prints all numbers from 1 up to and including N using a for loop.

    Given:

    int N = 10;
    Expected Output:

    Numbers from 1 to 10 are: 1 2 3 4 5 6 7 8 9 10 
*/

// g++ "Exercise 1 Print Numbers From 1 to N.cpp" -o "Exercise 1 Print Numbers From 1 to N" && ./"Exercise 1 Print Numbers From 1 to N"
#include<iostream>
using namespace std;
int main(){
    int N = 10;

    cout << "Numbers from 1 to 10 are: ";
    for ( int i = 1; i <= N; i++ ){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}