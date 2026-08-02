"""
    Date: 10-07-2026
    
    Exercise 5. Variable Swapping (The In-Place Method)
    Practice Problem: Write a program to swap the values of two variables, a and b, without using a third temporary variable.

    Exercise Purpose: This exercise will help you learn about memory efficiency and Python’s special tuple unpacking feature. In other languages like C or Java, you need a temporary variable to swap values safely. In Python, you can swap values in one line without risking data loss.

    Given Input: a = 5, b = 10

    Expected Output:

    Before Swap: a = 5, b = 10
    After Swap: a = 10, b = 5
"""

a = 5
b = 10
print(f"Before Swap: a = {a}, b = {b}")

a, b = b, a
print(f"After Swap: a = {a}, b = {b}")
