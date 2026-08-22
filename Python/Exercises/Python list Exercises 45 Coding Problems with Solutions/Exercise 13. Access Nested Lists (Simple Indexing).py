"""
    Date: 2026-08-22
    Time: 06:08:46
    Exercise 13. Access Nested Lists (Simple Indexing)
    Practice Problem: Given a “list of lists,” access a specific item hidden inside the inner list.

    Exercise Purpose: This exercise teaches you to navigate Multi-dimensional Data. Think of nested lists like a spreadsheet (Rows and Columns) or a theater seating chart. To find a specific seat, you need the row and seat numbers.

    Given Input:
    Nested List: [[1, 2], [3, 4, 5], [6, 7]]
    Goal: Access the number 5.

    Expected Output: Accessed Value: 5
"""

Nested_List = [[1, 2], [3, 4, 5], [6, 7]]

print(f"Accessed Value: {Nested_List[1][2]}")