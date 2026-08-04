"""
    Date: 2026-08-04
    Time: 08:28:03
    Exercise 38. File Creation and Basic I/O
    Practice Problem: Write a program that creates a new text file named notes.txt, writes three separate lines of text to it, and then reads that file back to display the contents in the console.

    Exercise Purpose: This exercise introduces “Persistent Storage.” Unlike variables that disappear when the program stops, files allow you to save data to the hard drive. Learning the open(), write(), and read() workflow is essential for building logging systems and saving user settings.

    Given Input: Lines to write:

    “Hello, this is my first note.”
    “Python file handling is simple.”
    “End of file.”
    
    Expected Output:

    notes.txt

    Hello, this is my first note.
    Python file handling is simple.
    End of file.
"""


with open("notes.txt", "w") as file:
    file.write("Hello, this is my first note.\nPython file handling is simple.\nEnd of file.")

with open("notes.txt", "r") as file:
    content = file.read()

print(content)