/* 
    Date: 2026-08-01 | Time: 08:28
    Author: Muhammad Dilawar

    File: Exercise 12 Calculator using Function Pointers.cpp
    Description: Exercise 12: Calculator using Function Pointers
    Practice Problem: Write a function execute_operation(int a, int b, int (*operation)(int, int)) that takes two numbers and a function pointer. The function should execute the pointed-to function (like add or subtract) using a and b and return the result. Define separate add and subtract functions to pass to it.

    Expected Output:
    Addition result (10 + 3): 13
    Subtraction result (10 - 3): 7
*/

// g++ "Exercise 12 Calculator using Function Pointers.cpp" -o "Exercise 12 Calculator using Function Pointers" && ./"Exercise 12 Calculator using Function Pointers"
#include<iostream>
using namespace std;

int add(int a, int b){ return a+b;}
int sub(int a, int b){ return a-b;}

int execute_operation(int a, int b, int (*operation)(int, int)){
    return operation (a, b);
}
int main(){
    int num1 = 10, num2 = 3;

    int sum = execute_operation(num1, num2, add);
    cout << "Addition result (" << num1 << " + " << num2 << "): " << sum << endl;
    
    int difference = execute_operation(num1, num2, sub);
    cout << "Subtraction result (" << num1 << " - " << num2 << "): " << difference << endl;
    
    cout << endl;
    return 0;
}