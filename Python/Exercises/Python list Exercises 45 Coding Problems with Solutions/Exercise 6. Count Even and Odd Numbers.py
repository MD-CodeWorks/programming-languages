"""
    Date: 2026-08-11
    Time: 15:55:07
    Exercise 6. Count Even and Odd Numbers
    Practice Problem: Given a list of integers, iterate through the items and count how many are even and how many are odd.

    Exercise Purpose: This introduces Flow Control and the Modulo Operator. It is a classic “Filtering” pattern where you categorize data based on a mathematical property. In real-world apps, this is the foundation for things like alternating row colors in a table or batching jobs into two different queues.

    Given Input: Numbers: [10, 21, 4, 45, 66, 93, 11]

    Expected Output:
    Even numbers: 3
    Odd numbers: 4
"""

Numbers = [10, 21, 4, 45, 66, 93, 11]

even_count = 0;
odd_count = 0;

for val in Numbers:
    if (val % 2 == 0):
        even_count += 1
    else:
        odd_count += 1;
print(f"Even numbers: {even_count}\nOdd numbers: {odd_count}")