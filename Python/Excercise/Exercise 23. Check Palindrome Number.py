"""
    Date: 2026-07-21
    Time: 09:20:48
    Exercise 23. Check Palindrome Number
    Practice Problem: Write a program to check if a given number is a palindrome. A palindrome number remains the same when its digits are reversed (e.g., 121, 545).

    Exercise Purpose: This exercise teaches “Algorithmic Reversal.” While strings are easy to reverse in Python, reversing a number mathematically using the modulo (%) and floor division (//) operators deepens understanding of how integers are stored in memory and how to manipulate digits individually.

    Given Input: number = 121

    Expected Output:
    Original number 121
    Yes. given number is palindrome number    
"""

number = 121
temp = number
rev_num = 0
while (temp > 0):
    last_digit = temp % 10
    rev_num = (rev_num * 10) + last_digit
    temp = temp // 10

print("Original number", number)
if(rev_num == number):
    print("Yes. given number is palindrome number")
else:
    print("No. given number is not palindrome number")