/* 
    Date: 2026-07-30 | Time: 09:23
    Author: Muhammad Dilawar

    File: Exercise 10 Inline Function.cpp
    Description: Exercise 10: Inline Function
    Practice Problem: Convert a simple addition function that takes two integers and returns their sum into an inline function.

    Expected Output:
    x:15 y:5
    Inline add result: 20

*/
/*
    Here is a clean, simple note on **Inline Functions in C++:

---

1. What is an Inline Function?

An "inline function" is a function for which the C++ compiler replaces the function call directly with the function's actual code at compile time.

Instead of jumping to a memory location to execute a function and coming back, the code is copied inline where it is called.

---

2. Advantages & Disadvantages

Advantages (Pros)

    Faster Execution:** Eliminates the overhead of function calls (saving registers, pushing/popping stack parameters).
    Better Optimization:** Gives the compiler more opportunities to optimize surrounding code.
    No Extra Stack Cost:** Saves memory allocation on the call stack for small instructions.

Disadvantages (Cons)

    Code Bloat (Increased File Size):** Replacing calls with code multiple times increases the binary size.
    Cache Thrashing:** Larger code size can lead to CPU cache misses, making the program slower.
    Not Guaranteed:** The compiler can ignore the `inline` request if the function is too complex.

---

3. When to Use vs. When NOT to Use

✅ When to USE `inline`

    Small Functions: Functions that contain only 1 to 3 lines of code.
    Frequently Called Functions: Small functions placed inside heavy loops or executed thousands of times per second.
    Getters and Setters: Simple class member functions that set or return a private variable value.
    Basic Math Helpers: Simple utility calculations like `add()`, `square()`, or `getMax()`.

❌ When NOT to Use `inline`

    Large / Complex Functions: Functions with dozens of lines or heavy logic.
    Functions with Loops: Functions containing `for`, `while`, or `do-while` loops.
    Recursive Functions: Functions that call themselves (e.g., `factorial()`, `fibonacci()`).
    Functions with `switch` or `goto`: Complex conditional branching blocks.
    Functions containing Static Variables: Local static variables can cause unexpected behavior when inlined.
*/
// g++ "Exercise 10 Inline Function.cpp" -o "Exercise 10 Inline Function" && ./"Exercise 10 Inline Function"
#include<iostream>
using namespace std;

inline int add(int a,int b){
    return a + b;
}

int main(){
    int x = 15, y = 5;
    cout << "x:" << x << " y:" << y << endl;
    cout << "Inline add result: " << add(x, y) << endl;
    cout << endl;
    return 0;
}