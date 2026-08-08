/*
Date: 2026-08-08 | Time: 17:03
    Exercise 1: Initialize and Print Array
    Practice Problem: Create a C++ program that declares an integer array of size 5. Prompt the user to enter 5 integer values, store these values sequentially in the array, and then print all 5 elements to the console on a single line, separated by spaces.

    Expected Output:
    Enter 5 integers:
    Element 1: 10
    Element 2: 20
    Element 3: 30
    Element 4: 40
    Element 5: 50

    The elements in the array are: 10 20 30 40 50
*/

// g++ "Exercise 1: Initialize and Print Array.cpp" -o "Exercise 1: Initialize and Print Array" && ./"Exercise 1: Initialize and Print Array"
#include<iostream>
using namespace std;
int main(){
    int array[5] = {};
    cout << "Enter 5 integers: " << endl;
    for (int i = 0; i < 5; i++){
        cout << "Element " << i+1 << ": ";
        cin >> array[i];
    }

    cout << "The elements in the array are: ";
    for (int j = 0; j < 5; j++){
        cout << array[j] << " ";
    }
    cout << endl;
    return 0;
}