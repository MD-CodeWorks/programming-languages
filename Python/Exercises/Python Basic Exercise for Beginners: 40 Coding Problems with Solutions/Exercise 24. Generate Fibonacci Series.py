"""
    Date: 2026-07-23
    Time: 07:42:17
    Exercise 24. Generate Fibonacci Series
    Practice Problem: Write a program to print the first 15 terms of the Fibonacci series. The sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones.

    Exercise Purpose: The Fibonacci sequence is a classic way to learn about state management in loops. You keep track of two changing variables at once to find the next number, which helps you see how data moves through each step.

    Given Input: Terms = 15
    Expected Output: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
"""

# Method 1
print("Method 1")
Terms = 15
a = 0
b = 1
print(a, end = " ")
print(b, end = " ")
for i in range(2, Terms):
    sum = a + b
    a = b
    b = sum    
    print(sum, end = " ")

print()

# Method 2
print("Method 2")
Terms = 15
a, b = 0, 1
for _ in range(Terms):
    print(a, end=" ")
    a, b = b, a + b

print()