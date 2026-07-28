/* 
    Date: 2026-07-24 | Time: 09:09
    Author: Muhammad Dilawar

    File: Exercise 7 Default Arguments.cpp
    Description: Exercise 7: Default Arguments
    Practice Problem: Write a function power(double base, int exponent = 2) that calculates baseexponent. Use a default argument of 2 for the exponent. The function should calculate the square if the exponent is omitted during the call.

    Expected Output:
    7 raised to 3: 343
    5 squared (default): 25
*/

// g++ "Exercise 7 Default Arguments.cpp" -o "Exercise 7 Default Arguments" && ./"Exercise 7 Default Arguments"
#include<iostream>
using namespace std;

double power(double base, int exponent = 2){
    double baseexponent = 1;
    for (int i = 1; i <= exponent; i++){
        baseexponent = baseexponent * base;
    }
    return baseexponent;
}
int main(){
    double base = 7;
    int exp = 3;
    cout << base << " raised to " << exp << ": " << power(base, exp) << endl;
    
    base = 5;
    cout << base << " raised to (default): " << power(base) << endl;
    cout << endl;
    return 0;
}