"""
    Date: 10-07-2026

    Exercise 4. String Slicing and Substring Removal
    Practice Problem: Write a function to remove characters from a string starting from index 0 up to n and return a new string.

    Exercise Purpose: This exercise demonstrates how to truncate data strings, a common data-cleaning task.

    Given Input:

    remove_chars("pynative", 4)
    remove_chars("pynative", 2)
    Expected Output:
        tive
        native
"""

def remove_chars(word, n):
    print("Original String: ", word)

    res = word[n:]
    return res

str = "pynative"

print(remove_chars(str, 4))
print(remove_chars(str, 2))