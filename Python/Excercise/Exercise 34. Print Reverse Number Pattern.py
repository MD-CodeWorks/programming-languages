"""
    Date: 2026-07-31
    Time: 08:03:57
    Exercise 34. Print Reverse Number Pattern
    Practice Problem: Print a downward number pattern where each row starts with a decreasing value.

    Exercise Purpose: In this exercise, you will learn about range control and practice using negative steps in loops to move backwards. This skill is important for algorithms that process data from the end of a file to the beginning.

    Given Input: Rows = 5

    Expected Output:
    5 4 3 2 1 
    4 3 2 1 
    3 2 1 
    2 1 
    1
"""

print("Method 1: Using For loop")
Rows = 5
for i in range(Rows, 0, -1):
    for j in range(i, 0, -1):
        print(j, end=" ")
    print()

Rows = 5
# Method 2: Single Loop with join()
print("Method 2: Using For Loop")
for i in range(Rows, 0, -1):
    print(*range(i, 0, -1))

print("Using while loop")
while(Rows>=1):
    cols = Rows
    while(cols>=1):
        print(cols, end = " ")
        cols -= 1
    print()
    Rows -= 1