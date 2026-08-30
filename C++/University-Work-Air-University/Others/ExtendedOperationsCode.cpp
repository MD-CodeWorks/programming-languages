// g++ ExtendedOperationsCode.cpp -o ExtendedOperationsCode && ./ExtendedOperationsCode
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice, n1, n2;

    cout << "Remindor (1)." << endl;
    cout << "Power (2)." << endl;
    cout << "Squar root (3)." << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice != 3)
    {
        cout << "Enter your first number: ";
        cin >> n1;
        cout << "Enter your second number: ";
        cin >> n2;
    }
    else
    {
        cout << "Enter your Num: ";
        cin >> n1;
    }

    switch (choice)
    {
    case 1:
        if (n2 != 0)
            cout << n1 % n2 << endl;
        else
        {
            cout << "0 is not Devisible!" << endl;
        }
        break;
    case 2:
        // pow(4, 4) = 4*4*4*4 = 256
        // pow(4, 2) = 4*4 = 16
        // Formula: pow(base, exponent) -> base ki power exponent
        cout << pow(n1, n2);
        break;
    case 3:
        cout << sqrt(n1);
        break;
    }

    cout << endl;
    return 0;
}