"""
    Date: 2026-07-19
    Time: 10:18:19
    
    Exercise 19. Multi-Tiered Income Tax Calculation
    Practice Problem: Calculate income tax for a given income based on these rules:

    First $10,000: 0% tax
    Next $10,000: 10% tax
    Remaining income: 20% tax

    Exercise Purpose: This exercise introduces “Tax Brackets” logic, a classic example of complex conditional branching. It shows how to calculate values cumulatively instead of applying a single percentage to the entire amount.

    Given Input: income = 45000
    Expected Output: Total income tax to pay is 6000
"""

income = 45000

if(income <= 10000):
    tax = 0
elif(income <= 20000):
    tax = (income - 10000) * 10/100
else:
    tax1 = 10000 * 10/100
    tax = tax1 + ((income - 20000) * 0.2)

print(f"Total income tax to pay is {int(tax)}")