"""
    Date: 2026-08-01
    Time: 08:46:51
    Exercise 35. Digit Detection in Strings
    Practice Problem: Write a program to check if a user-entered string contains any numeric digits. Use a for loop to examine each character.

    Exercise Purpose: This exercise will help you learn about string traversal and character analysis. In software development, these skills are important for tasks like checking if a username has forbidden characters or if a password is complex enough.

    Given Input: input_string = "Python3"
    Expected Output: The string 'Python3' contains digits: True
"""

input_string = 'Python3'

num = "0123456789"


flag = False
for ch in input_string:
    for n in num:
        if n == ch:
            flag = True
    if flag: break
print(f"The string '{input_string}' contains digits: {flag}")

print("Method 2")
contains_digit = False

# Iterate through each character
for char in input_string:
    if char.isdigit():
        contains_digit = True
        break  # Exit early since we found one

print(f"The string '{input_string}' contains digits: {contains_digit}")

print("Method 3")
flag = any(ch.isdigit() for ch in input_string)
print(f"The string '{input_string}' contains digits: {flag}")