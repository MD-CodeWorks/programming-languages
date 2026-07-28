"""
    Date: 2026-07-15
    Time: 09:33:10
    
    Exercise 10. Finding Extremes (Min/Max) in a List
    Practice Problem: Given a list of integers, find and print both the largest and the smallest numbers.

    Exercise Purpose: This exercise explores “Aggregate Functions.” While Python has built-in tools for this, understanding how to identify extremes is critical for data normalization, where you often need to find the range of a dataset before processing it.

    Given Input: nums = [45, 2, 89, 12, 7]
    Expected Output: Largest: 89 Smallest: 2
"""

nums = [45, 2, 89, 12, 7]

largest = nums[0]
smallest = nums[0]

for i in nums:
    if largest < i:
        largest = i
    if smallest > i:
        smallest = i

print(f"Largest: {largest} Smallest: {smallest}")