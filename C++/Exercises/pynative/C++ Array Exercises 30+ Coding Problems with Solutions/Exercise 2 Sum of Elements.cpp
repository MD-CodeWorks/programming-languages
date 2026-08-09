/*
    Date: 2026-08-09 | Time: 23:33
    Exercise 2: Sum of Elements
    Practice Problem: Write a C++ program that calculates the sum of all integer elements stored in an array. Initialize an array of size 5 with some hardcoded values (e.g., 10, 20, 30, 40, 50) and print the total sum.

    Given:
    int arr[] = {10, 20, 30, 40, 50};
    
    Expected Output:
    The sum of all elements is: 150
*/

// g++ "Exercise 2 Sum of Elements.cpp" -o "Exercise 2 Sum of Elements" && ./"Exercise 2 Sum of Elements"
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for ( int i = 0; i < size; i++ ){
        sum += arr[i];
    }
    cout << "The sum of all elements is: " << sum;
    cout << endl;
    return 0;
}