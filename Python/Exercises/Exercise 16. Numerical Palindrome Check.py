"""
    Date: 2026-07-18
    Time: 11:08:37
    Exercise 16. Numerical Palindrome Check
    Practice Problem: Write a program to check if a given number is a palindrome (reads the same forwards and backwards).

    Exercise Purpose: This exercise introduces the idea of “Reversing Logic.” Reversing a string is simple, but reversing an integer takes some math, like using division and modulo, or changing its type. This shows how data types can work differently.

    Given Input:
    Case 1: number = 121
    Case 2: number = 125
    
    Expected Output:
    Number 125 is not palindrome number
    Number 121 is palindrome number
"""

number1 = 121
number2 = 125

def palindrome_checker(number):
    string = str(number)
    rev_str = string [::-1]

    if (string == rev_str):
        print(f"Number {number} is palindrome number")
    else: print(f"Number {number} is not palindrome number")

palindrome_checker(number2)
palindrome_checker(number1)