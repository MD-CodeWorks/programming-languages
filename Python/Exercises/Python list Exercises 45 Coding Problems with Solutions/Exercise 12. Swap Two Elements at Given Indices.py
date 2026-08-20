"""
    Date: 2026-08-20
    Time: 19:40:48
    Exercise 12. Swap Two Elements at Given Indices

    Practice Problem: Write a script to swap the positions of two elements in a list based on their indices.

    Exercise Purpose: Swapping is the heart of every sorting algorithm like Bubble Sort or Quick Sort. While other languages require a temporary variable to hold a value during the swap, Python offers an elegant, one-line tuple unpacking method that is faster to write and less error-prone.

    Given Input:
    List: [23, 65, 19, 90]
    Indices to Swap: 0 and 2
    
    Expected Output:
    Original: [23, 65, 19, 90]
    Swapped: [19, 65, 23, 90]
"""
print("Method 1")
List = [23, 65, 19, 90]

print(f"Original: {List}")

index0 = List[0]
index2 = List[2]
List[0] = index2
List[2] = index0

print(f"Swapped: {List}")

print("Method 2")
List1 = [23, 65, 19, 90]
print(f"Original: {List1}")
List1[0], List1[2] = List1[2], List1[0]
print(f"Swapped: {List1}")
