"""
    Date: 2026-08-02
    Time: 20:53:49
    Exercise 36. Capitalize First Letter (Title Case)
    Practice Problem: Write a program to capitalize the first letter of each word in a given string without using the built-in .title() method.

    Exercise Purpose: In this exercise, you will learn about “Tokenization” and “String Re-assembly.” You will split a sentence into words, change them, and then put the sentence back together. This helps you practice working with complex data structures.

    Given Input: text = "hello world from python"
    Expected Output: Hello World From Python
"""
# Define the input string
text = "hello world from python"

print("Method 1")
# Demonstrate built-in title() method (for reference)
print(text.title())

print("Method 2 and according to the requirment")
# Split the sentence into a list of individual words using whitespace as separator
words = text.split()

# Initialize an empty list to store the capitalized words
capitalized_words = []

# Iterate through each word in the list
for word in words:
    # Capitalize the first letter of the current word and add it to the list
    capitalized_words.append(word.capitalize())

# Join all capitalized words back into a single string separated by spaces and print it
print(" ".join(capitalized_words))

print("Similar to Method 2, but using a while loop")
text = "hello world from python"
words = text.split()

capitalized_words = []
i = 0

# Loop runs until we reach the end of the words list
while i < len(words):
    capitalized_words.append(words[i].capitalize())
    i += 1  # Increment index

print(" ".join(capitalized_words))