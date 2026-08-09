"""
    Date: 2026-08-09
    Time: 22:07:37
    Exercise 4. Find Maximum and Minimum from List
    Practice Problem: Identify the largest and smallest numerical values within a provided list.

    Exercise Purpose: Finding extremes is vital for tasks like identifying the “best” price, the “highest” score, or detecting “outlier” data points in a dataset.

    Given Input: Data: [45, 12, 89, 2, 67]

    Expected Output:

    Maximum: 89
    Minimum: 2
"""

Data = [45, 12, 89, 2, 67]

max = Data[0]
min = Data[0]

for val in Data:
    if max < val:
        max = val
    if min > val:
        min = val
print("Maximum: ", max)
print("Minimum: ", min)