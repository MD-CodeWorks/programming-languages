// g++ A.cpp -o A && ./A

#include<iostream>
using namespace std;

int main(){
    int choice;
    cout << "1. Addition" << endl;
    cout << "2. Subtaction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    float num1, num2;
    cout << "Enter two number (e.g: 2 6): ";
    cin >> num1 >> num2;

    switch (choice){
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if ( num2 != 0 )
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Zero is not divisible.";
            break;
        default:
            cout << "Invalid input! Please choose the number between (1-4).";
    }

    return 0;
}
