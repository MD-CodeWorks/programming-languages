"""
    Date: 2026-07-25
    Time: 16:37:22
    Exercise 28. Odd/Even List Splitter
    Practice Problem: Start with a list of 10 numbers. Iterate through them and sort them into two separate lists: one for even numbers and one for odd numbers.

    Given Input: numbers = [12, 7, 34, 21, 5, 10, 8, 3, 19, 2]

    Expected Output:
    Even numbers: [12, 34, 10, 8, 2]
    Odd numbers: [7, 21, 5, 3, 19]
"""

numbers = [12, 7, 34, 21, 5, 10, 8, 3, 19, 2]
Even = []
Odd = []

for i in numbers:
    if i % 2 == 0:
        Even.append(i)
    else:
        Odd.append(i)
print(f"Even numbers: {Even}")
print(f"Odd numbers: {Odd}")

# Method 2
print("Method 2: This is professional way")
Even = [i for i in numbers if i % 2 == 0]
Odd = [i for i in numbers if i % 2 != 0]

print(f"Even numbers: {Even}")
print(f"Odd numbers: {Odd}")