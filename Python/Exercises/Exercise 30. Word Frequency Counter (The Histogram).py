"""
    Date: 2026-07-28
    Time: 17:32:18
    Exercise 30. Word Frequency Counter (The Histogram)
    Practice Problem: Write a program that counts how many times each word appears in a given paragraph and stores these counts in a dictionary.

    Exercise Purpose: This is a classic “Natural Language Processing” (NLP) task. It teaches you how to map data to occurrences, which is the logic used by search engines to index web pages or by social media platforms to identify trending hashtags.

    Given Input: text = "apple banana apple cherry banana apple"
    Expected Output: {'apple': 3, 'banana': 2, 'cherry': 1}
"""

# Method 1
text = "apple banana apple cherry banana apple"
word = text.split()

apple = 0
banana = 0
cherry = 0

for val in word:
    if val == 'apple':
        apple += 1
    elif val == 'banana':
        banana += 1
    else:
        cherry += 1
word_counts = {}
word_counts['apple'] = apple
word_counts['banana'] = banana
word_counts['cherry'] = cherry
print(word_counts)

# Method 2: This is Professional way
print("Method 2")
text = "apple banana apple cherry banana apple"
words = text.split()

word_counts = {}

for word in words:
    if word in word_counts:
        word_counts[word] += 1  # Purani count mein +1
    else:
        word_counts[word] = 1   # Pehli baar aaya toh 1 set
print(word_counts)