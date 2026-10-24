/*
    Date: 2026-10-15 | Time: 19:25
    Author: Muhammad Dilawar

    File: Exercise 3 Find Maximum.cpp
    Description: Exercise 3: Find Maximum
    Practice Problem: C++ program to find the largest (maximum) element in a given integer array.

    Given:
    int arr[] = {15, 8, 27, 4, 19};
    
    Expected Output:
    The maximum element in the array is: 27
*/

// g++ "Exercise 3 Find Maximum.cpp" -o "Exercise 3 Find Maximum" && ./"Exercise 3 Find Maximum"
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {15, 8, 27, 4, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "The maximum element in the array is: " << max << endl;
    cout << endl;
    return 0;
}