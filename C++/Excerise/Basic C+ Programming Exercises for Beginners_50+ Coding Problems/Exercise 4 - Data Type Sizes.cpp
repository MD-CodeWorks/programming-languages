/*
    Exercise 4: Data Type Sizes
    Practice Problem: Write a program that uses the C++ language feature to determine and print the size, in bytes, of the four fundamental data types: char, int, float, and double.

    Given:

    char c = 'C';
    int a = 60;
    float f = 15.5;
    double d = 25.555;
    Expected Output:

    Size of char: 1 byte(s)
    Size of int: 4 byte(s)
    Size of float: 4 byte(s)
    Size of double: 8 byte(s)
*/

// g++ "Exercise 4 - Data Type Sizes.cpp" -o "Exercise 4 - Data Type Sizes" && ./"Exercise 4 - Data Type Sizes"
#include<iostream>
using namespace std;
int main(){
    char c = 'C';
    int a = 60;
    float f = 15.5;
    double d = 25.555;

    cout << "Size of char: " << sizeof(c) << " byte(s)" << endl;
    cout << "Size of int: " << sizeof(a) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;

    return 0;
}