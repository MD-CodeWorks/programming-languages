"""
    Number guessing game in Python and C

    The number guessing game is a programming project used to demonstrate concepts such as random number generation, loops, conditional statements, and user interaction. The program randomly selects a number from a user-defined range and guides the player toward the correct answer by indicating whether each guess is higher or lower than the target number.

    How the Game Works
    To understand how the number guessing game functions, let’s walk through two practical scenarios. These examples demonstrate 
    how narrowing down the range intelligently, similar to a binary search can help guess the number efficiently.
"""

import random
import math

while(True):
    start = int(input("Enter starting number: "))
    end = int (input("Enter ending num: "))
    if start < end:
        break
    else:
        print()



range_size = end - start + 1

num = random.randint(start, end)
ch = math.ceil(math.log2(range_size))
attempt = 0

print(f"----- You have only {ch} chances -----")
while attempt < ch:
    attempt += 1
    guess = int(input("Enter your guess number: "))

    if guess == num:
        print("Congratulations! You guessed the correct number and won!")
        break
    elif guess > num:
        print("Too high")
        if attempt < ch:
            print(f"You have {ch-attempt} attempts left.")
    elif guess < num:
        print("Too low")
        if attempt < ch:
            print(f"You have {ch-attempt} attempts left.")
    if attempt == ch and guess != num:
        print("Sorry, you have used all your chances. Game over!")
        print(f"The correct number was: {num}")
