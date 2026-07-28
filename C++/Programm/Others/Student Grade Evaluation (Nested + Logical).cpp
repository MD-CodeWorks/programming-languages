// g++ A.cpp -o A && ./A

#include<iostream>
using namespace std;

int main(){
    int marks, attendance;
    cout << "Enter the marks (0-100): ";
    cin >> marks;

    cout << "Enter the Attendance Percentage: ";
    cin >> attendance;
    if ( marks >= 50 && attendance >= 75 ){
        if ( marks >= 85 ){
            cout << "A Student Passes.\n" << "Grade: A";
        }
        else if ( marks >= 70 ){
            cout << "A Student Passes.\n" << "Grade: B";
        }
        else{
            cout << "A Student Passes.\n" << "Grade: C";
        }
    }
    else{
        cout << "A Student Fail.\n" << "Grade: F";
    }
    return 0;
}
