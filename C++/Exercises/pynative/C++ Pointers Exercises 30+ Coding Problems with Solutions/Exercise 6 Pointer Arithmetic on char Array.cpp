/* 
    Date: 2026-10-27 | Time: 06:29
    Author: Muhammad Dilawar

    File: Exercise 6 Pointer Arithmetic on char Array.cpp
    Description: Exercise 6: Pointer Arithmetic on char Array

    Practice Problem: Declare a char array word[] = "CODE". Declare a char pointer p pointing to the beginning of the array. Use pointer arithmetic (p + N) and the dereference operator to print the third character (‘D’) of the array.

    Expected Output: The third character is: D

*/

// g++ "Exercise 6 Pointer Arithmetic on char Array.cpp" -o "Exercise 6 Pointer Arithmetic on char Array" && ./"Exercise 6 Pointer Arithmetic on char Array"
#include<iostream>
using namespace std;
int main(){
    char word[] = {"CODE"};

    char *word_ptr = word;

    cout << "The third character is: " << *(word_ptr + 2);
    
    cout << endl;
    return 0;
}