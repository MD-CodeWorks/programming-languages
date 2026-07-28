"""
    Date: 2026-07-28
    Time: 20:55:26
    Exercise 31. Print Alternate Prime Numbers
    Practice Problem: Write a program to find all prime numbers up to 20, but only print every second (alternate) prime number found.

    Exercise Purpose: This exercise combines “Nested Loops” (to check for primality) with “Step Logic.” It requires the programmer to first identify a subset of data and then apply a secondary filter, a common task in data reporting.

    Given Input: Limit = 20
    Expected Output: 2, 5, 11, 17
"""

Limit = 20
Prime = []

for i in range(2, Limit+1):
    is_Prime = True
    for val in range(2, i):
        if i % val == 0:
            is_Prime = False
            break
    if is_Prime:
        Prime.append(i)
print("Expected Output:", Prime[::2])
