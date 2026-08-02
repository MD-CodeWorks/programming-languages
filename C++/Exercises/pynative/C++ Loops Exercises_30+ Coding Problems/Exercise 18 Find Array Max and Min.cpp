/* 
    Date: 2026-07-17 | Time: 05:34
    Author: Muhammad Dilawar

    File: Exercise 18 Find Array Max and Min.cpp
    Description: Exercise 18: Find Array Max and Min
    Practice Problem: Write a C++ program that reads an integer array from user (or vector) and uses a loop to find and display the largest (maximum) and smallest (minimum) elements stored within it.

    Expected Output:

    Enter the number of elements: 5
    Enter 5 integers:
    Element 1: 10
    Element 2: 30
    Element 3: 90
    Element 4: 20
    Element 5: 40

    Maximum element is: 90
    Minimum element is: 10
*/

// g++ "Exercise 18 Find Array Max and Min.cpp" -o "Exercise 18 Find Array Max and Min" && ./"Exercise 18 Find Array Max and Min"
#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    int int_arr[size] = {};
    
    cout << "Enter " << size << " integers: " << endl;
    for (int i = 0; i < size; i++ ){
        cout << "Element " << i+1 << ": ";
        cin >> int_arr[i];
    }
    int largest = int_arr[0], smallest = int_arr[0];

    for (int i = 0; i < size; i++){
        if (largest < int_arr[i]){
            largest = int_arr[i];
        }
        if(smallest > int_arr[i])
        smallest = int_arr[i];
    }

    cout << endl;
    cout << "Maximum element is: " << largest << endl;
    cout << "Minimum element is: " << smallest << endl;

    cout << endl;
    return 0;
}