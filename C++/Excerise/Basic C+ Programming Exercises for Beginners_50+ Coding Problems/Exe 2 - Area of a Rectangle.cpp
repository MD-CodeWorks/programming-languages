/*
    Exercise 2: Area of a Rectangle
    Practice Problem: Write a C++ program that asks the user for the length and width of a rectangle. The program should calculate the area (Area equals Length multiplied by Width) and display the result.

    Expected Output:

    Enter the length of the rectangle: 10
    Enter the width of the rectangle: 5.5

    The area of the rectangle is: 55
*/

// g++ "Exe 2 - Area of a Rectangle.cpp" -o "Exe 2 - Area of a Rectangle" && ./"Exe 2 - Area of a Rectangle"
#include<iostream>
using namespace std;
int main(){
    float length = 0, width = 0, area = 0;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = length * width;

    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}