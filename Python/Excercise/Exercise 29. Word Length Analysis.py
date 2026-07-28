"""
    Date: 2026-07-25
    Time: 16:47:00
    Exercise 29. Word Length Analysis
    Practice Problem: Create a list of 5 words. Write a loop that iterates through the list and prints each word alongside its character count.

    Exercise Purpose: This exercise introduces “Metadata Extraction.” Often, you aren’t just interested in the data itself, but in its properties. In web development, this logic is used to validate if a user’s password or username meets specific length requirements.

    Given Input: words = ["Apple", "Banana", "Cherry", "Date", "Elderberry"]

    Expected Output:
    Apple - 5 Banana - 6 Cherry - 6 Date - 4 Elderberry - 10
"""

words = ["Apple", "Banana", "Cherry", "Date", "Elderberry"]

for i in words:
    print(f"{i} - {len(i)}", end = " ")
    
print()

# Method 2: professional way
word_lengths = {word: len(word) for word in words}
# Result: {'Apple': 5, 'Banana': 6, 'Cherry': 6, 'Date': 4, 'Elderberry': 10}
print(word_lengths)