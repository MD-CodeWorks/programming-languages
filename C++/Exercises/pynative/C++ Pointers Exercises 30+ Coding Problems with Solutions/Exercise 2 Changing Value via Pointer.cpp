/* 
    Date: 2026-10-25 | Time: 08:10
    Author: Muhammad Dilawar

    File: Exercise 2 Changing Value via Pointer.cpp
    Description: Exercise 2: Changing Value via Pointer

    Practice Problem: Declare an integer variable named number initialized to 50. Declare an integer pointer named num_ptr and make it point to number. Change the value of number to 99 using only the pointer num_ptr. Print the final value of the variable number.

    Expected Output:
    The final value of number is: 99
*/

// g++ "Exercise 2 Changing Value via Pointer.cpp" -o "Exercise 2 Changing Value via Pointer" && ./"Exercise 2 Changing Value via Pointer"
#include<iostream>
using namespace std;
int main(){
    int number = 50;
    int *num_ptr = &number;
    *num_ptr = 99;
    cout << "The final value of number is: " << number;
    cout << endl;
    return 0;
}