/* 
    Date: 2026-07-17 | Time: 05:27
    Author: Muhammad Dilawar

    File: Exercise 17 Array Element Sum Using Loop.cpp
    Description: Exercise 17: Array Element Sum Using Loop

    Practice Problem: Write a C++ program that uses a loop to calculate and print the sum of all elements in the array.

    Given:
    int arr[5] = {10, 20, 30, 40, 50};
    
    Expected Output:
    The sum of all elements in the array is: 150
*/

// g++ "Exercise 17 Array Element Sum Using Loop.cpp" -o "Exercise 17 Array Element Sum Using Loop" && ./"Exercise 17 Array Element Sum Using Loop"
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    cout << "The sum of all elements in the array is: " << sum << endl;
    cout << endl;
    return 0;
}