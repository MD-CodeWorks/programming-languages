/* 
    Date: 2026-10-26 | Time: 19:26
    Author: Muhammad Dilawar

    File: Exercise 4 Pointer Arithmetic - Increment.cpp
    Description: Exercise 4: Pointer Arithmetic (Increment)

    Practice Problem: Declare an integer array named data with the elements {10, 20, 30, 40, 50}. Declare an integer pointer data_ptr and point it to the first element of the array. Use pointer increment (ptr++) and the dereference operator to traverse the array and print all five elements.

    Given: int data[] = {10, 20, 30, 40, 50};
    Expected Output: Elements using pointer increment: 10 20 30 40 50

*/

// g++ "Exercise 4 Pointer Arithmetic - Increment.cpp" -o "Exercise 4 Pointer Arithmetic - Increment" && ./"Exercise 4 Pointer Arithmetic - Increment"
#include<iostream>
using namespace std;
int main(){
    int data[] = {10, 20, 30, 40, 50};
    int size = sizeof(data) / sizeof(data[0]);
    int *data_ptr = data;

    cout << "Elements using pointer increment: ";
    for(int i = 0; i < size; i++){
        cout << *(data_ptr) << " ";
        data_ptr++;
    }
    cout << endl;
    return 0;
}