"""
    Date: 10-07-2026

    Exercise 3. String Indexing and Even Slicing
    Practice Problem: Display only those characters which are present at an even index number in given string.

    Exercise Purpose: Understand how data is stored in memory using zero-based indexing. In most languages, the first character is at position 0, the second at 1, and so on. Mastering indexing is vital for data parsing.

    Given Input: String: "pynative"

    Expected Output:

    Original String is  pynative
    Printing only even index chars
    p
    n
    t
    v
"""

str = "pynative"

print("Original String is pynative\nPrinting only even index chars")
i = 0
while i < len(str):
    if (i % 2 == 0):
        print(str[i])
    i = i + 1