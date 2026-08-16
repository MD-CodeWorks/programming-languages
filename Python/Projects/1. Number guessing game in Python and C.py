"""
    Number guessing game in Python and C

    The number guessing game is a programming project used to demonstrate concepts such as random number generation, loops, conditional statements, and user interaction. The program randomly selects a number from a user-defined range and guides the player toward the correct answer by indicating whether each guess is higher or lower than the target number.

    How the Game Works
    To understand how the number guessing game functions, let’s walk through two practical scenarios. These examples demonstrate 
    how narrowing down the range intelligently, similar to a binary search can help guess the number efficiently.
"""

import random
import math

while True:
    while True:
        try:
            start = int(input("Enter starting number: "))
            break
        except ValueError:
            print("Only allowed numbers")

    while True:
        try:
            end = int (input("Enter ending num: "))
            if start < end:
                break
            else:
                print("Oops! The ending number must be greater than the starting number (e.g., Start: 1, End: 100). Please try again:")
        except ValueError:
            print("Only allowed numbers")



    range_size = end - start + 1

    num = random.randint(start, end)
    chances = math.ceil(math.log2(range_size))
    attempt = 0

    print(f"----- You have only {chances} chances -----")
    while attempt < chances:
        attempt += 1
        while True:
            try:
                guess = int(input("Enter your guess number: "))
                if guess >= start and guess <= end:
                    break
                else: print("Please enter a number within the range!")
            except ValueError:
                print("only allowed numbers.")

        if guess == num:
            print("Congratulations! You guessed the correct number and won!")
            break
        elif guess > num:
            print("Too high")
            if attempt < chances:
                print(f"You have {chances-attempt} attempts left.")
        elif guess < num:
            print("Too low")
            if attempt < chances:
                print(f"You have {chances-attempt} attempts left.")
        if attempt == chances and guess != num:
            print("Sorry, you have used all your chances. Game over!")
            print(f"The correct number was: {num}")

    while True:
        play_again = input("Do you want to play again? (y/n): ").lower()
        if play_again == 'y' or play_again == 'n':
            break
        else:
            print("Please enter only 'y' or 'n'.")
    if play_again == 'n':
        print("Thanks for play the game.")
        break   