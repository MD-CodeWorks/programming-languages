"""
    Date: 2026-07-17
    Time: 06:02:21
    Exercise 15. Nested Loops for Pattern Generation
    Practice Problem: Print the following pattern where each row contains a number repeated a specific number of times based on its value.
    1 
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5

    Exercise Purpose: Pattern printing is a classic way to learn “Nested Loops.” You coordinate an outer loop for rows and an inner loop for columns or repetitions. This improves spatial logic and control over output formatting.

    Given Input: Range: 1 to 5

    Expected Output: (The pattern shown above)
"""

# Method 1
num = 5
i = 1
while i <= num:
    j = 1
    while j <= i:
        print(i, end = " ")
        j += 1
    print()
    i += 1

# Method 2
# Outer loop for rows
for num in range(1, 6):
    # Inner loop for repetition
    for i in range(num):
        print(num, end=" ") # end=" " keeps it on the same line
    # New line after each row
    print("\n")
