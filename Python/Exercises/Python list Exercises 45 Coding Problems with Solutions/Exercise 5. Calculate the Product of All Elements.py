"""
    Date: 2026-08-10
    Time: 22:14:03
    Exercise 5. Calculate the Product of All Elements
    Practice Problem: Multiply every number in a list together to find the total product.

    Exercise Purpose: While sum is built-in, “product” often requires you to think about how to accumulate values. This exercise reinforces the concept of an “accumulator variable” in a loop.

    Given Input: Factors: [2, 3, 5, 7]
    Expected Output: Product: 210
"""

Factors = [2, 3, 5, 7]

total_product = 1;

for val in Factors:
    total_product *= val
print("Product:", total_product)