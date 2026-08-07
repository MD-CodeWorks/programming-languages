"""
    Date: 2026-07-23
    Time: 08:02:18
    Exercise 25. Check Leap Year

    Practice Problem: Write a program that takes a year as input and determines if it is a leap year.

    A leap year is a year in the Gregorian calendar that contains an extra day, making it 366 days long instead of the usual 365. This extra day, February 29th, is added to keep the calendar synchronized with the Earth’s revolution around the Sun.

    Rules for leap years: a year is a leap year if it’s divisible by 4, unless it’s also divisible by 100 but not by 400.

    Exercise Purpose: This exercise is vital for mastering “Complex Conditional Logic.” A leap year isn’t just “every 4 years”; there are specific exceptions for century years. This forces the programmer to use nested if statements or compound logical operators (and/or).

    Given Input: year = 2024
    Expected Output: 2024 is a leap year
"""

year = int(input("Enter the year: "))

if(year % 400 == 0 or year % 4 == 0 and year % 100 != 0):
    print(f"{year} is a leap year")
else: print(f"{year} is not a leap year")