"""
    Date: 2026-07-30
    Time: 08:20:54
    Exercise 33. Character Replacer (Data Sanitization)
    Practice Problem: Ask the user for a sentence. Replace every empty space in that sentence with an underscore (_) and print the final result.

    Exercise Purpose: This exercise focuses on “String Sanitization.” In web development and file management, spaces are often problematic (especially in URLs or file paths). Learning to replace characters is a critical skill for preparing data for storage or transmission.

    Given Input: "I love coding in Python"
    Expected Output: I_love_coding_in_Python
"""

sentence = input("Enter your sentence: ")

# Method 1: Direct Replace (Best & Simple)
print(sentence.replace(" ", "_"))

# Method 2: Split & Join (Data sanitization mein multi-space handling ke liye use hota hai)
print("_".join(sentence.split()))