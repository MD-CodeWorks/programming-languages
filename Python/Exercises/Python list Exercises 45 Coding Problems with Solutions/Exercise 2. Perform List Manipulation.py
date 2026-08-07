"""
    Date: 2026-08-07
    Time: 21:35:57
    Exercise 2. Perform List Manipulation
    Practice Problem: Take a given list and modify it through five specific actions:

    Change Element: Change the second element of a list to 200 and print the updated list.
    Append Element: Add 600 o the end of a list and print the new list.
    Insert Element: Insert 300 at the third position (index 2) of a list and print the result.
    Remove Element (by value): Remove 600 from the list and print the list.
    Remove Element (by index): Remove the element at index 0 from the list print the list.

    Exercise Purpose: Python lists are mutable, meaning they can be changed after they are created. This exercise demonstrates the various ways to “reshape” your data dynamically during execution.

    Given Input: Initial List: [100, 50, 400, 500]

    Expected Output:
    Updated (Change): [100, 200, 400, 500]
    Updated (Append): [100, 200, 400, 500, 600]
    Updated (Insert): [100, 200, 300, 400, 500, 600]
    Updated (Remove 600): [100, 200, 300, 400, 500]
    Updated (Remove Index 0): [200, 300, 400, 500]
"""

List = [100, 50, 400, 500]
print("Original: ", List);

List[1] = 200
print(f"Updated (Change): {List}")

List.append(600)
print(f"Updated (Append): {List}")

List.insert(2, 300)
print(f"Updated (Insert): {List}")

List.remove(600)
print(f"Updated (Remove 600): {List}")

List.pop(0)
print(f"Updated (Remove Index 0): {List}")