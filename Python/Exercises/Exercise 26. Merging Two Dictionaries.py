"""
    Date: 2026-07-24
    Time: 10:08:27
    Exercise 26. Merging Two Dictionaries
    Practice Problem: Write a program that takes two separate dictionaries and merges them into one single dictionary.

    Exercise Purpose: This introduces “Key-Value Consolidation.” Merging dictionaries is a common task when combining configuration files or user profiles. It also teaches you about “Key Overwriting”—what happens when both dictionaries share the same key.

    Given Input:
    dict1 = {"name": "Alice", "age": 25}
    dict2 = {"city": "New York", "job": "Engineer"}

    Expected Output:
    {'name': 'Alice', 'age': 25, 'city': 'New York', 'job': 'Engineer'}
"""

dict1 = {"name": "Alice", "age": 25}
dict2 = {"city": "New York", "job": "Engineer"}

# Method 1: Union Operator (Python 3.9+ ke liye sabse clean aur modern tariqa)
print(dict1 | dict2)
# Method 2: Dictionary Unpacking / ** Operator (Python 3.5+ ke liye best tariqa)
print({**dict1, **dict2})
# Method 3: In-place update using .update() (Har Python version par chalta hai, original dict modify hoti hai)
dict1.update(dict2)
print(dict1)