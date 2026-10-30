/* 
    Date: 2026-10-30 | Time: 21:40
    Author: Muhammad Dilawar

    File: Exercise 7 Copy Array.cpp
    Description: Exercise 7: Copy Array
    Practice Problem: Create two integer arrays, arr1 and arr2, both of size 5. Write a program to copy all elements from arr1 to arr2, and then print the elements of arr2 to verify the copy operation.

    Given: int arr1[] = {1, 2, 3, 4, 5};
    Expected Output: Elements of the copied array (arr2): 1 2 3 4 5
*/

// g++ "Exercise 7 Copy Array.cpp" -o "Exercise 7 Copy Array" && ./"Exercise 7 Copy Array"
#include<iostream>
using namespace std;
int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];

    for (int i = 0; i < 5; i++){
        arr2[i] = arr1[i];
    }
    cout << "Elements of the copied array (arr2): ";
    for (int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}