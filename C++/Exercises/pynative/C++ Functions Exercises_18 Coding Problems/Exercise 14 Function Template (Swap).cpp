/* 
    Date: 2026-08-03 | Time: 08:34
    Author: Muhammad Dilawar

    File: Exercise 14 Function Template (Swap).cpp
    Description: Exercise 14: Function Template (Swap)
    Practice Problem: Create a function template swap_generic that can successfully swap the values of any two variables of the same data type using pass by reference.

    Expected Output:
    After swap (int): x = 200, y = 100
    After swap (double): d1 = 9.9, d2 = 5.5
*/

// g++ "Exercise 14 Function Template (Swap).cpp" -o "Exercise 14 Function Template (Swap)" && ./"Exercise 14 Function Template (Swap)"
#include<iostream>
using namespace std;

template <typename T>
void swap_generic (T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 100, y = 200;
    swap_generic(x, y);
    cout << "After swap (int): x = " << x << ", y = " << y << endl;
    
    double d1 = 5.5, d2 = 9.9;
    swap_generic(d1, d2);
    cout << "After swap (double): x = " << d1 << ", y = " << d2 << endl;
    cout << endl;
    return 0;
}