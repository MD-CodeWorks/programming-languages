/* 
    Date: 2026-07-23 | Time: 07:13
    Author: Muhammad Dilawar

    File: Exercise 5 Modify Array Element.cpp
    Description: Exercise 5: Modify Array Element
    Practice Problem: Define a function set_to_zero(int arr[], int index) that takes an integer array and an index, and sets the element at the specified index of the array to 0.

    Given:
    int data[] = {1, 2, 3, 4, 5};
    int target_index = 2;
    
    Expected Output:
    Original Array: 1 2 3 4 5 
    Modified Array: 1 2 0 4 5 
*/

// g++ "Exercise 5 Modify Array Element.cpp" -o "Exercise 5 Modify Array Element" && ./"Exercise 5 Modify Array Element"
#include<iostream>
using namespace std;
void set_to_zero(int arr[], int index){
    arr[index] = 0;
}

int main(){
    int data[] = {1, 2, 3, 4, 5};
    int target_index = 2;
    int size = sizeof(data) / sizeof(data[0]);
    cout << "Original Array: ";
    for (int i = 0; i < size; i++){
        cout << data[i] << " ";
    }
    set_to_zero(data, target_index);

    cout << "Modified Array: ";
    for ( int i = 0; i < size; i++ ){
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}