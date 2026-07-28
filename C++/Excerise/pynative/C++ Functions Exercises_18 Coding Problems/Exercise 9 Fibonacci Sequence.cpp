/* 
    Date: 2026-07-25 | Time: 17:11
    Author: Muhammad Dilawar

    File: Exercise 9 Fibonacci Sequence.cpp
    Description: Exercise 9: Fibonacci Sequence
    Practice Problem: Write a recursive function fibonacci(int n) that returns the n-th number in the Fibonacci sequence. The sequence starts 0, 1, 1, 2, 3, 5, 8, …, where F(0) equals 0, F(1) equals 1, and F(n) equals F(n-1) + F(n-2) for n greater than 1.

    Given:
    int N = 8;

    Expected Output:
    The 8th Fibonacci number is: 21
*/

// g++ "Exercise 9 Fibonacci Sequence.cpp" -o "Exercise 9 Fibonacci Sequence" && ./"Exercise 9 Fibonacci Sequence"
#include<iostream>
using namespace std;

int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n-1) + fibonacci (n-2);
}

int main(){
    int N = 9;
    int result = fibonacci(N);
    cout << "The " << N << "th Fibonacci number is: " << result << endl;
    cout << endl;
    return 0;
}