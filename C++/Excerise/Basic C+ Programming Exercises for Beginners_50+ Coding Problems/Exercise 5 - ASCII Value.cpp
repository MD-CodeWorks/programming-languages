/*
    Exercise 5: ASCII Value
    Practice Problem: Create a program that accepts a single character input from the user. It should then print the decimal integer value that corresponds to that character in the ASCII (American Standard Code for Information Interchange) table.

    Expected Output:

    Enter a single character: A
    The ASCII value of 'A' is: 65
*/

// g++ "Exercise 5 - ASCII Value.cpp" -o "Exercise 5 - ASCII Value" && ./"Exercise 5 - ASCII Value"
#include<iostream>
using namespace std;
int main(){
    char chr;
    cout << "Enter a single character: ";
    cin >> chr;
    cout << "The ASCII value of '" << chr << "' is: " << int(chr) << endl;
    return 0;
}