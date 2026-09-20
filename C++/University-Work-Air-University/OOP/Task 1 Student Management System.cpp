/*
    Date: 2026-09-20 | Time: 10:58
    Author: Muhammad Dilawar

    File: Task 1 Student Management System.cpp
    Description:Task 1: Student Management System
        Create a C++ class named Student to manage student details.

        Requirements:
            Private Attributes:
            string name
            int rollNumber
            double gpa

        Constructors:
            A Default Constructor that initializes name to "Unknown", rollNumber to 0, and gpa to 0.0.
            A Parameterized Constructor to set custom values when creating an object.

        Public Getters & Setters:
            Implement setter and getter methods for each attribute.
            Validation check in Setter: In setGpa(double g), only update gpa if the value is between 0.0 and 4.0. Otherwise, print an error message.

        Member Function:
            void displayDetails(): Prints all the details of the student.

        In main() function:
            Create one student object using the parameterized constructor.
            Call displayDetails() to print the information.

*/

// g++ "Task 1 Student Management System.cpp" -o "Task 1 Student Management System" && ./"Task 1 Student Management System"
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float gpa;

public:
    Student()
    {
        name = "Unknown";
        rollNo = 0;
        gpa = 0;
    }
    Student(string n, int r, float g){
        name = n;
        rollNo = r;
        gpa = g;
    }

    void setName(string n){
        name = n;
    }
    void setRollNo(int r){
        rollNo = r;
    }
    void setGpa(float g){
        if(g >= 0 && g <= 4.00){
            gpa = g;
        }
        else cout << "Please enter the correct gpa(e.g: 3.3)" << endl;
    }
    string getName(){
        return name;
    }
    int getRollNo(){
        return rollNo;
    }
    float getGpa(){
        return gpa;
    }
    void displayDetails(){
        cout << "\n----- Your Details -----\n";
        cout << "Name: " << name << endl;
        cout << "Roll NO: " << rollNo << endl;
        cout << "Gpa: " << gpa << endl;
    }
};

int main()
{
    Student s1("Ali", 259329, 3.2);
    s1.displayDetails();
    cout << endl;
    return 0;
}