"""
    Date: 5-Aug-2026
    Time: 09: 21 PM
    Exercise 39. External File Word Counter
    Practice Problem: Write a script that opens an existing .txt file and counts the total number of words it contains.

    Exercise Purpose: This exercise teaches “Data Parsing.” In professional environments, you rarely work with data you typed into the code yourself; you almost always pull data from external sources. This script simulates basic text-mining techniques used to analyze documents or logs.

    Given Input:
    An external file sample.txt containing: “Coding is the language of the future.”

    Expected Output: The file contains 7 words.
"""

with open("sample.txt", "w") as file:
    file.write("Coding is the language of the future.")

with open("sample.txt", "r") as file:
    words = file.read().split()

print(f"The file contains {len(words)} words.")