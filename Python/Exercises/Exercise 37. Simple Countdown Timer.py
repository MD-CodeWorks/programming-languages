"""
    Date: 2026-08-03
    Time: 08:24:49
    Exercise 37. Simple Countdown Timer
    Practice Problem: Create a countdown timer that starts from a given number and counts down to zero using a while loop.

    Exercise Purpose: In this exercise, you will learn about loop termination logic and time delay management. Knowing how to control the flow of your code in real time is important for making animations, game loops, or automated scripts.

    Given Input: start_count = 5
    Expected Output: 5 4 3 2 1 Blast off!
"""

import time  # For time delay

start_count = 5

# Loop runs as long as start_count is greater than 0
while start_count > 0:
    print(start_count, end=" ")  # Print current number on the same line
    time.sleep(1)                # Wait for 1 second
    start_count -= 1             # Decrease the counter by 1

# Print final message after countdown finishes
print("Blast off!")