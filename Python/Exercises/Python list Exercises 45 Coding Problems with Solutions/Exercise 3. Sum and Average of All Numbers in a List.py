"""
    Date: 2026-08-08
    Time: 16:48:07
    Exercise 3. Sum and Average of All Numbers in a List

    Practice Problem: Calculate the total sum of all integers in a list and find the arithmetic mean (average).

    Exercise Purpose: Aggregation is the heart of data science. This exercise teaches you how to reduce a collection of multiple data points into a single, meaningful summary statistic.

    Given Input: Numbers: [10, 20, 30, 40, 50]

    Expected Output:
    Sum: 150
    Average: 30.0
"""

Numbers = [10, 20, 30, 40, 50]

sum = 0
average = 0
for val in Numbers:
    sum += val
    average = sum / len(Numbers)

print(f"Sum: {sum}")
print(f"Average: {average}")