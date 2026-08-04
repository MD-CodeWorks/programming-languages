/* 
    Date: 2026-08-04 | Time: 09:29
    Author: Muhammad Dilawar

    File: Exercise 15 Pass by Constant Reference.cpp
    Description: Exercise 15: Pass by Constant Reference
    Practice Problem: Write a function print_string(const std::string &s) that takes a string object by constant reference. Inside the function, print the string. The purpose is to avoid copying the string and prevent its modification.

    Expected Output:
    String value (read-only): This is a long message.
    Original string remains: This is a long message.

*/

// g++ "Exercise 15 Pass by Constant Reference.cpp" -o "Exercise 15 Pass by Constant Reference" && ./"Exercise 15 Pass by Constant Reference"
#include<iostream>
using namespace std;

void print_string(const string &s){
    cout << "String value (read-only): " << s << endl;
}

int main(){
    string msg = "This is a long message.";
    
    print_string(msg);    

    cout << "Original string remains: " << msg << endl;

    cout << endl;
    return 0;
}