/* 
    Date: 2026-10-24 | Time: 20:19
    Author: Muhammad Dilawar

    File: Exercise 6 Reverse Array.cpp
    Description: Exercise 6: Reverse Array
    Practice Problem: Write a C++ program that reads an integer array, prints the original array, and then prints the elements in reverse order.

    Given: int arr[] = {10, 20, 30, 40, 50};
    
    Expected Output:
    Original array: 10 20 30 40 50 
    Reversed array: 50 40 30 20 10

*/

// g++ "Exercise 6 Reverse Array.cpp" -o "Exercise 6 Reverse Array" && ./"Exercise 6 Reverse Array"
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    
    cout << "Original array: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Reversed array: ";
    for (int i = 4; i > -1; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}