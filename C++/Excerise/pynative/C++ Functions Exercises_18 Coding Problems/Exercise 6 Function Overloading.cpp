/* 
    Date: 2026-07-23 | Time: 07:23
    Author: Muhammad Dilawar

    File: Exercise 6 Function Overloading.cpp
    Description: Exercise 6: Function Overloading
    Practice Problem: Implement Function Overloading by defining two functions named area.

    The first function, area(double length, double width), should calculate and return the area of a rectangle.
    The second function, area(double side), should calculate and return the area of a square side *side. Demonstrate that the C++ compiler can correctly choose between the two functions based on the number of arguments provided in the main function.
    
    Expected Output:
    Area of rectangle (10x5): 50
    Area of square (7x7): 49

*/

// g++ "Exercise 6 Function Overloading.cpp" -o "Exercise 6 Function Overloading" && ./"Exercise 6 Function Overloading"
#include<iostream>
using namespace std;

double area(double length, double width){
    double rectangle = length * width;
    return rectangle;
}
double area(double side){
    double square = side * side;
    return square;
}

int main(){
    double length = 10, width = 5;
    cout << "Area of rectangle (" << length << "*" << width <<"): " << area(length, width) << endl;
    double side = 7;
    cout << "Area of square (" << side << "*" << side << "): " << area(side) << endl;
    cout << endl;
    return 0;
}