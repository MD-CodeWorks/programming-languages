"""
    Date: 2026-07-18
    Time: 11:25:50
    Exercise 17. Merging Lists with Parity Filtering
    Practice Problem: Create a new list from two given lists such that the new list contains odd numbers from the first list and even numbers from the second list.

    Given Input:
    list1 = [10, 20, 25, 30, 35]
    list2 = [40, 45, 60, 75, 90]

    Expected Output: [25, 35, 40, 60, 90]
"""

list1 = [10, 20, 25, 30, 35]
list2 = [40, 45, 60, 75, 90]

list3 = []
for val in list1:
    if (val % 2 != 0):
        list3.append(val)
    
for val in list2:
    if(val % 2 == 0):
        list3.append(val)

print("Expected Output:", list3)