"""
    Date: 2026-08-15
    Time: 14:58:01
    Exercise 9. Create a Copy of a List
    Practice Problem: Create a copy of an existing list so that modifying the copy does not change the original.

    Exercise Purpose: This exercise addresses one of the most common “gotchas” for new Python programmers: Pass-by-Object-Reference. If you simply write list_b = list_a, both variables point to the same list in memory. Learning to “Clone” or “Copy” is vital for data integrity.

    Given Input: Original: ["Apple", "Banana", "Cherry"]

    Expected Output:
    Original: ['Apple', 'Banana', 'Cherry']
    Copy: ['Apple', 'Banana', 'Cherry']
    (Verification: Modifying copy doesn't hurt original!)
"""

Original = ["Apple", "Banana", "Cherry"]

copy = []

for val in Original:
    copy.append(val)

print("Original:", Original)
print("Copy:", copy)
print("(Verification: Modifying copy doesn't hurt original!)")