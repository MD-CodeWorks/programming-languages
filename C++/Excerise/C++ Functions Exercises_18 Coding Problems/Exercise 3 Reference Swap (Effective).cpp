/* 
    Date: 2026-07-21 | Time: 08:37
    Author: Muhammad Dilawar

    File: Exercise 3 Reference Swap (Effective).cpp
    Description: Exercise 3: Reference Swap (Effective)
    Practice Problem: Write a function swap_reference(int &a, int &b) that successfully swaps the values of the two variables passed to it by using pass by reference. Print the original variables in main before and after the call to show the effect.

    Given:
    int x = 10, y = 20;
    
    Expected Output:
    Before call: x = 10, y = 20
    Inside swap_reference function: a = 20, b = 10
    After call: x = 20, y = 10

*/

// g++ "Exercise 3 Reference Swap (Effective).cpp" -o "Exercise 3 Reference Swap (Effective)" && ./"Exercise 3 Reference Swap (Effective)"
#include<iostream>
using namespace std;

void swap_value(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap_reference funcion: a = " << a << ", b = " << b << endl;
}

int main(){
    int x = 10, y = 20;
    cout << "Before call: x = " << x << ", y = " << y << endl;
    swap_value(x, y);
    cout << "After call: x = " << x << ", y = " << y << endl;
    cout << endl;
    return 0;
}