"""
    Date: 2026-08-12
    Time: 20:59:10
    Exercise 7. Reverse a List
    Practice Problem: Take a list and reverse the order of its elements.

    Exercise Purpose: Reversal is a fundamental operation in data structures (like reversing a string or a linked list). Python provides multiple ways to do this, and understanding the difference between In-place Reversal (changing the original) and Slicing (creating a new one) is crucial for memory management.

    Given Input: List: [100, 200, 300, 400, 500]
    Expected Output: Reversed List: [500, 400, 300, 200, 100]
"""

# Method 1
print("Method 1")
li = [100, 200, 300, 400, 500]
li.reverse()
print(f"Reversed List: {li}")

# Method 2
print("Method 2")
li1 = [100, 200, 300, 400, 500]
rev_li1 = li1[::-1]
print(f"Reversed List: {rev_li1}")