/* 
    Date: 2026-10-24 | Time: 20:35
    Author: Muhammad Dilawar

    File: Exercise 1 Declaration and Dereference.cpp
    Description: Exercise 1: Declaration and Dereference
    Practice Problem: Declare an integer variable named value and initialize it to 100. Declare an integer pointer named ptr. Assign the memory address of value to ptr. Finally, print the integer stored in value by using only the pointer ptr and the dereference operator.

    Expected Output:
    The value is: 100

*/

// g++ "Exercise 1 Declaration and Dereference.cpp" -o "Exercise 1 Declaration and Dereference" && ./"Exercise 1 Declaration and Dereference"
#include<iostream>
using namespace std;
int main(){
    int value = 100;
    int *ptr = &value;

    cout << "The value is: " << *ptr << endl;
    cout << endl;
    return 0;
}