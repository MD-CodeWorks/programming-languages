/* 
    Date: 2026-10-24 | Time: 20:07
    Author: Muhammad Dilawar

    File: Exercise 5 Count Occurrences.cpp
    Description: Exercise 5: Count Occurrences
    Practice Problem: Given an array, write a program to count and print how many times the number 3 appears in the array.

    Given:
    int arr[] = {1, 3, 2, 3, 4, 3, 5};
    int target = 3;
    
    Expected Output:
    The number 3 occurs 3 times.

*/

// g++ "Exercise 5 Count Occurrences.cpp" -o "Exercise 5 Count Occurrences" && ./"Exercise 5 Count Occurrences"
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 3, 2, 3, 4, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3, count = 0;

    for (int i = 0; i < size; i++){
        if(target == arr[i]){
            count++;
        }
    }
    cout << "The number " << target << " occurs " << count << " times.\n";

    cout << endl;
    return 0;
}