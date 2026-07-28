/*
    Date: 2026-07-16 | Time: 07:56
    Author: Muhammad Dilawar

    File: Exercise 16 Count Vowels-Consonants in a String.cpp
    Description: Exercise 16: Count Vowels/Consonants in a String
    Practice Problem: Write a C++ program that reads a string of characters and uses a loop to count the total number of vowels (a, e, i, o, u) and consonants present in the string. Ignore spaces and non-alphabetic characters.

    Given:
    std::string text = "PYnative";

    Expected Output:
    Analysis of the string: PYnative
    Total Vowels: 3
    Total Consonants: 5

*/

// g++ "Exercise 16 Count Vowels-Consonants in a String.cpp" -o "Exercise 16 Count Vowels-Consonants in a String" && ./"Exercise 16 Count Vowels-Consonants in a String"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text = "PYnative";
    int vowel_count = 0, consonants = 0;

    for (int i = 0; i < text.length(); i++)
    {
        char ch = tolower(text[i]);
        if (ch >= 'a' && ch <= 'z'){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel_count++;
            }
            else
            {
                consonants++;
            }
        }
    }
    
    cout << "Analysis of the string: " << text << endl;
    cout << "Total Vowels: " << vowel_count << endl;
    cout << "Total Consonants: " << consonants << endl;
    
    cout << endl;
    return 0;
}