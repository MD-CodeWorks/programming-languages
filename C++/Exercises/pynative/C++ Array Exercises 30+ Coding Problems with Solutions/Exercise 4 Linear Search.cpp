/*
    Date: 2026-08-10 | Time: 22:24
    Exercise 4: Linear Search
    Practice Problem: Implement a C++ program that performs a linear search. Given an array, ask the user to enter a number to search for. If the number is found, print its index (position); otherwise, print a “Not Found” message.

    Given:
    int arr[] = {10, 50, 30, 70, 80, 20};
    
    Expected Output:
    Enter the number to search for: 30
    Element 30 found at index: 2
*/

// g++ "Exercise 4 Linear Search.cpp" -o "Exercise 4 Linear Search" && ./"Exercise 4 Linear Search"
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 50, 30, 70, 80, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    cout << "Enter the number to search for: ";
    cin >> num;
    bool found = false;
    for (int i = 0; i < size; i++){
        if (num == arr[i]){
            cout << "Element " << num << " found at index: " << i;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Not Found";
    }
    

    cout << endl;
    return 0;
}