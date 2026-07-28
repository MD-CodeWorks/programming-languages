/* 
    Date: 2026-07-21 | Time: 08:46
    Author: Muhammad Dilawar

    File: Exercise 4 Pass Array to Function.cpp
    Description: Exercise 4: Pass Array to Function
    Practice Problem: Write a function print_array(int arr[], int size) that accepts an integer array and its size, then iterates through the array and prints all its elements, separated by a space.

    Given:
    int numbers[] = {10, 20, 30, 40, 50};
    
    Expected Output:
    Array elements: 10 20 30 40 50 
*/

// g++ "Exercise 4 Pass Array to Function.cpp" -o "Exercise 4 Pass Array to Function" && ./"Exercise 4 Pass Array to Function"
#include<iostream>
using namespace std;

void print_array(int arr[], int size){
    cout << "Array elements: ";
    for ( int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }
}

int main(){
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    print_array(numbers, size);
    cout << endl;
    return 0;
}