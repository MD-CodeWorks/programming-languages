/* 
    Date: 2026-08-02 | Time: 21:26
    Author: Muhammad Dilawar

    File: Exercise 13 Function Template (Max).cpp
    Description: Exercise 13: Function Template (Max)
    Practice Problem: Write a function template max_value that can find and return the maximum of two values of any data type (e.g., int, double, or char) that supports the greater-than operator (>).

    Expected Output:
    a = 5, b = 10 Max int: 10
    a = 3.14 b = 2.71 Max double: 3.14
    a = "z" b= "a" Max char: z
*/

// g++ "Exercise 13 Function Template (Max).cpp" -o "Exercise 13 Function Template (Max)" && ./"Exercise 13 Function Template (Max)"
#include<iostream>
using namespace std;

template <typename T>
T max_val(T a, T b){
    if (a > b) return a;
    else return b;
    // return (a > b) ? a : b; // Ternary Operator
}
int main(){
    int a = 5, b = 10;
    cout << "a = " << a << ", b = " << b << " Max int: " << max_val(a, b) << endl;
    
    double da = 3.14, db = 2.71;
    cout << "a = " << da << ", b = " << db << " Max double: " << max_val(da, db) << endl;
    
    char ca = 'z', cb = 'a';
    cout << "a = " << ca << ", b = " << cb << " Max char: " << max_val(ca, cb) << endl;

    cout << endl;
    return 0;
}