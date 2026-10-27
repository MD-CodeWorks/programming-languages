/* 
    Date: 2026-10-27 | Time: 06:24
    Author: Muhammad Dilawar

    File: Exercise 5 Pointer Arithmetic (Index Access).cpp
    Description: Exercise 5: Pointer Arithmetic (Index Access)
    
    Practice Problem: Declare an integer array named scores with elements {85, 90, 78, 95, 88}. Declare a pointer score_ptr and point it to the first element. Access and print the third element (which is 78) of the array using pointer arithmetic in the form *(ptr + N).

    Given: int scores[] = {85, 90, 78, 95, 88};
    Expected Output: The value of the third element is: 78
*/

// g++ "Exercise 5 Pointer Arithmetic (Index Access).cpp" -o "Exercise 5 Pointer Arithmetic (Index Access)" && ./"Exercise 5 Pointer Arithmetic (Index Access)"
#include<iostream>
using namespace std;
int main(){
    int scores[] = {85, 90, 78, 95, 88};

    int *scores_ptr = scores;

    cout << "The value of the third element is: " << *(scores_ptr + 2);
    cout << endl;
    return 0;
}