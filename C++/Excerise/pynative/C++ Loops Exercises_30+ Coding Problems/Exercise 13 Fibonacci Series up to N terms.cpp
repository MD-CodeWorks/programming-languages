/* 
    Date: 2026-07-15 | Time: 07:04
    Author: Muhammad Dilawar

    File: Exercise 13 Fibonacci Series up to N terms.cpp
    Description: Exercise 13: Fibonacci Series up to N terms
    Practice Problem: Write a C++ program that generates and prints the first N terms of the Fibonacci series.

    The Fibonacci series starts with 0 and 1, and each subsequent term is the sum of the two preceding terms (Fn​=Fn−1​+Fn−2​).

    Given:
    int N = 8;
    Expected Output:
    Fibonacci Series up to 8 terms:
    0 1 1 2 3 5 8 13

    Fibonacci series ka asan matlab yeh hai ke pehle do numbers 0 aur 1 hote hain,
    aur aage aane wala har naya number pichle do numbers ko plus (add) kar ke banta hai.
    
    Formulla:Pehla term (a) = 0
    Doosra term (b) = 1
    Teesra term (c) = a + b(0 + 1 = 1)
    Chotha term = pichle do ka sum (1 + 1 = 2)
    
    Steps (Loop ke liye):
    Pehle do terms (0 aur 1) ko print karein.
    Naye term ke liye pichle do ko plus karein: nextTerm = a + b.
    Variables ko aage shift karein: a ko b ki value de dein, aur b ko nextTerm ki value de dein.
    Yeh process N terms tak repeat karein.
*/

// g++ "Exercise 13 Fibonacci Series up to N terms.cpp" -o "Exercise 13 Fibonacci Series up to N terms" && ./"Exercise 13 Fibonacci Series up to N terms"
#include<iostream>
using namespace std;
int main(){
    int N = 8;
    int a = 0, b = 1, num = 1;
    cout << a << " " << b << " ";
    for ( int i = 1; i <= N - 2; i++ ){
        num = a + b; // 1, 2, 3, 5, 8, 13
        a = b; // 1, 1, 2, 3, 5, 8
        b = num; // 1, 2, 3, 5, 8, 13
        cout << num << " ";
    }
    cout << endl;
    return 0;
}