/*

*/

// g++ "Question 1-1.cpp" -o "Question 1-1" && ./"Question 1-1"
#include <iostream>
using namespace std;

void c()
{
    system("clear");
}

int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}
int powerOfNumber(int n1, int n2)
{
    int power = 1;
    for ( int i = 1; i <= n2; i++ ){
        power = power * n1;
    }
    return power;
}

int sumOfSeries(int n){
    int sum = 0;
    for ( int i = 1; i <= n; i++ ){
        sum = sum + i;
    }
    return sum;
}

int main()
{
    system("clear");
    do
    {
        cout << "1. Factorial\n2. Power of number\n3. sum of a series from 1 to n e.g.,(1 + 2 + 3 + 4.....n)\n4. Exit\n";
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4)
            break;
        switch (choice)
        {
        case 1:
        {
            c();
            int n;
            cout << "Enter your num: ";
            cin >> n;
            cout << "Your factorial is: " << factorial(n) << endl;
        }
        break;
        case 2:
        {
            c();
            int n1, n2;
            cout << "Enter your 1st num: ";
            cin >> n1;
            cout << "Enter your 2nd num: ";
            cin >> n2;
            cout << "Your power of number is: " << powerOfNumber(n1, n2) << endl;
        }
        break;
        case 3:
        {
            c();
            int n;
            cout << "Enter your num: ";
            cin >> n;
            cout << "Your sum is: " << sumOfSeries(n) << endl;
            
            cout << endl;
        }
        break;
        default:
            cout << "Please enter the num betweeen (1-4).\n";
        }

    } while (true);
    cout << endl;
    return 0;
}