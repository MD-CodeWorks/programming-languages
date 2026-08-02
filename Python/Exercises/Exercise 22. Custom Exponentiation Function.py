"""
    Date: 2026-07-21
    Time: 08:59:49
    Exercise 22. Custom Exponentiation Function
    Practice Problem: Write a function called exponent(base, exp) that returns an integer value of the base raised to the power of the exponent.

    Exercise Purpose: Learn about “Accumulator Patterns.” Although Python has a built-in power operator (**), making your own version shows how repeated multiplication works and how functions return results to the main program.

    Given Input: base = 2, exp = 5

    Expected Output: 2 raises to the power of 5: 32
"""

base = 2
exp = 5

def exponent(base, exp):
    new = base
    for _ in range(1, exp):
        new = new * base
    return new

print(f"{base} raises to the power of {exp}:", exponent(base, exp))