/* 
    Date: 2026-07-18 | Time: 08:02
    Author: Muhammad Dilawar

    File: Exercise 20 Print All Primes in Range (1-100).cpp
    Description: Exercise 20: Print All Primes in Range (1-100)
    Practice Problem: Write a C++ program that uses nested loops to find and print all prime numbers in the range from 1 to 100 (inclusive).

    Expected Output:
    Prime numbers between 1 and 100 are:
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 

*/

// g++ "Exercise 20 Print All Primes in Range (1-100).cpp" -o "Exercise 20 Print All Primes in Range (1-100)" && ./"Exercise 20 Print All Primes in Range (1-100)"
#include<iostream>
using namespace std;
int main(){
    int N = 100;
    
    for (int i = 2; i <= N; i++){
        bool isPrime = true;
        for (int j = 2; j < i; j++ ){
            if ( i % j == 0 ){
                // cout << i << " % " << j << " = " << i % j << endl;
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << i << " " ;
        }
    }
    cout << endl;
    return 0;
}