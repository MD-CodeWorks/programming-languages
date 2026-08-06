"""
    Date: 06-Aug-2026
    Time: 6:14 AM
    Exercise 1. Perform Basic List Operations
    Practice Problem: Write a script to perform the following three operations on given list

    Access the third element of a list
    List Length: Print the total number of items
    Check if the list is empty

    Exercise Purpose: Before mastering complex algorithms, you must master data access: indexing, sizing, and validation. Quickly checking if a list has data prevents “Index Out of Range” errors that crash programs.

    Given Input: numbers = [10, 20, 30, 40, 50]

    Expected Output:
    Third element: 30
    Length of list: 5
    Is the list empty? False

"""

numbers = [10, 20, 30, 40, 50]

if len(numbers) >= 3:
    print(f"Third element: {numbers[2]}")

print(f"Length of list: {len(numbers)}")

is_list_empty = len(numbers) == 0;
print(f"Is the list empty? {is_list_empty}")