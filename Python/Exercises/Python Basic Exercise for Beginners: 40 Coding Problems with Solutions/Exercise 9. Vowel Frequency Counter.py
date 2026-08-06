"""
    Date: 2026-07-12
    Time: 13:21:44
    Exercise 9. Vowel Frequency Counter
    Practice Problem: Write a program to count the total number of vowels (a, e, i, o, u) present in a given sentence.

    Exercise Purpose: This exercise introduces “Membership Testing.” By checking if a character belongs to a specific group (the vowels), you learn how to filter data based on categories. This is a fundamental step toward building text-analysis tools or spam filters.

    Given Input: sentence = "Learning Python is fun!"
    Expected Output: Number of vowels: 6
"""
# Method 1
sentence = "Learning Python is fun!"

count = 0
i = 0
while(i < len(sentence)):
    if(sentence[i] == 'a'):
        count += 1
    elif(sentence[i] == 'e'):
        count += 1
    elif(sentence[i] == "i"):
        count += 1
    elif(sentence[i] == "o"):
        count += 1
    elif(sentence[i] == "u"):
        count += 1
    else: 
        count = count
    i = i + 1

print(f"Number of vowels: {count}")

# Method 2
sentence1 = "I am 'Muhammad Dilawar'"
vowels = "aeiou"
numOfVowels = 0

for char in sentence1.lower():
    if char in vowels:
        numOfVowels += 1

print(f"Number of vowels: {numOfVowels}")

#Method 3
sentence2 = "HiHiHiHi"
count1 = sum(1 for char in sentence2.lower() if char in vowels)

print(f"Number of vowels: {count1}")