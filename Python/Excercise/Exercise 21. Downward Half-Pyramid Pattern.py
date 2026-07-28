"""
    Date: 2026-07-20
    Time: 10:05:53
    Exercise 21. Downward Half-Pyramid Pattern
    Practice Problem: Print a downward half-pyramid pattern using stars (*).

    Exercise Purpose: Learn about reverse indexing. Controlling loop boundaries in reverse is important for algorithms that process data from end to beginning.

    Given Input: Rows: 5

    Expected Output:
    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
"""


# Mehtod 1
print("Method 1")
for i in range(5, 0, -1):
    for j in range(i):
        print("*", end=" ")
    print()

print()

# Method 2
# String multiplication (`"* " * i`) ka matlab hai ke Python screen par star ko `i` jitni martaba dohraya (repeat) kar raha hai.
print("Method 2")
for i in range(5, 0, -1):
    print("* " * i)

print()

# Mehtod 3
print("Method 3")
i = 5
while (i >= 1):
    j = 1
    while(j<=i):
        print("*", end = " ")
        j += 1
    print()
    i -= 1