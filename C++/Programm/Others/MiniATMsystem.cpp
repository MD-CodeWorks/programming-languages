// g++ MiniATMsystem.cpp -o MiniATMsystem && ./MiniATMsystem

#include <iostream>
using namespace std;

int main()
{
    int choice, totalBalance = 5000, amount;

    while (true)
    {
        cout << endl;
        cout << "Check Total Balance. (1)" << endl;
        cout << "Deposit. (2)" << endl;
        cout << "withdraw. (3)" << endl;
        cout << "exit (4)." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4)
        {
            cout << "Thanks!";
            break;
        }

        switch (choice)
        {
        case 1:
            cout << "Your balance is: " << totalBalance;
            break;
        case 2:
            cout << "Enter your Deposit amount: ";
            cin >> amount;
            totalBalance += amount;
            cout << "Now! Your new balance is: " << totalBalance;
            break;
        case 3:
            cout << "Enter your withdraw amount: ";
            cin >> amount;

            if (amount <= totalBalance)
            {
                totalBalance -= amount;
                cout << "Your remaining balance is: " << totalBalance;
            }
            else
            {
                cout << "Your Balance is Low.";
            }
            break;
        default:
            cout << "Invalid Input!";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
