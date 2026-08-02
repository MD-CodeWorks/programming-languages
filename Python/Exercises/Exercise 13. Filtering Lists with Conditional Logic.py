"""
    Date: 2026-07-16
    Time: 10:36:41
    Exercise 13. Filtering Lists with Conditional Logic
    Practice Problem: Iterate through a given list of numbers and print only those numbers which are divisible by 5.

    Exercise Purpose: This exercise teaches the use of the modulo operator (%) and loop filtering. In data processing, you often need to sift through large datasets to extract subsets that meet mathematical criteria.

    Given Input: num_list = [10, 20, 33, 46, 55]

    Expected Output:
    Divisible by 5:
    10, 20, 55
"""

# Method 1
num_list = [10, 20, 33, 46, 55]

print("Divisible by 5:")
for i in num_list: 
    if(i % 5 == 0): 
        print(i, end = ",")


print()
print()
# Method 2
print("Divisible by 5:")
divisible_nums = []
for i in num_list:
    if i % 5 == 0:
        divisible_nums.append(str(i))

# Is se automatic commas aur spaces lag jayenge aur aakhir mein extra comma nahi aayega
print(", ".join(divisible_nums))