/* 
    Date: 2026-10-30 | Time: 21:30
    Author: Muhammad Dilawar

    File: Exercise 7 NULL Pointer Check.cpp
    Description: Exercise 7: NULL Pointer Check
    Practice Problem: Declare an integer pointer named safe_ptr and initialize it to nullptr. Write a conditional statement to check if the pointer is null before attempting to dereference it. If it is null, print “Pointer is null, cannot dereference.” If it is not null, initialize a variable, assign its address to the pointer, and print the dereferenced value.

    Expected Output:
    Pointer is null, cannot dereference.
    Pointer is now valid. Dereferenced value: 77
*/

// g++ "Exercise 7 NULL Pointer Check.cpp" -o "Exercise 7 NULL Pointer Check" && ./"Exercise 7 NULL Pointer Check"
#include<iostream>
using namespace std;
int main(){
    int *safe_ptr = nullptr;
    if (safe_ptr == nullptr){
        cout << "Pointer is null, cannot dereference." << endl;
    }
    
    int num = 77;
    safe_ptr = &num;

    if(safe_ptr != nullptr){
        cout << "Pointer is now valid. Dereferenced value: " << *safe_ptr << endl;
    }
    cout << endl;
    return 0;
}