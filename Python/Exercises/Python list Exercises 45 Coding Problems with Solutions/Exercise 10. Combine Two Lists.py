"""
    Date: 2026-08-18
    Time: 21:39:04
    Exercise 10. Combine Two Lists
    Practice Problem: Merge two separate lists into a single, unified list.

    Exercise Purpose: Data often arrives in fragments from different sources (e.g., two different database queries). Combining or “Concatenating” them is the first step in data aggregation.

    Given Input:
    List A: ["Physics", "Chemistry"]
    List B: ["Maths", "Biology"]
    Expected Output: Combined List: ['Physics', 'Chemistry', 'Maths', 'Biology']
"""

List_A = ["Physics", "Chemistry"]
List_B = ["Maths", "Biology"]

Combined_List = List_A + List_B

print(f"Combined List: {Combined_List}")