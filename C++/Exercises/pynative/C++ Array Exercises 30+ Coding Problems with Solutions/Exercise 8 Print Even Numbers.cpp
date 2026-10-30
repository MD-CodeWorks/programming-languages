/* 
    Date: 2026-10-30 | Time: 21:48
    Author: Muhammad Dilawar

    File: Exercise 8 Print Even Numbers.cpp
    Description: Exercise 8: Print Even Numbers
    Practice Problem: Given an integer array, write a C++ program that only prints the elements that are even numbers.

    Given: int arr[] = {1, 6, 3, 8, 5, 10, 7};
    Expected Output: The even numbers in the array are: 6 8 10

*/

// g++ "Exercise 8 Print Even Numbers.cpp" -o "Exercise 8 Print Even Numbers" && ./"Exercise 8 Print Even Numbers"
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 6, 3, 8, 5, 10, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The even numbers in the array are: ";
    for (int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}