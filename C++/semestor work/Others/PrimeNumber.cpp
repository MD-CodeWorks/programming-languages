// g++ PrimeNumber.cpp -o PrimeNumber && ./PrimeNumber
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int n, count = 0;
    // cout << "Etner your number: ";
    // cin >> n;

    // Logic 1: with while loop
    // int j = 1, count = 0;
    // while ( j < n ){
    //     if (n % j == 0){
    //         count++;
    //     }
    //     j++;
    // }
    // if ( count == 2 ){
    //     cout << "Prime Number";
    // }
    // else{
    //     cout << "This is not Prime number.";
    // }

    // Logic 1: with for loop
    // for ( int i = 1; i <= n; i++ ){
    //     if ( n % i == 0 )
    //     count++;
    // }
    // if ( count == 2 )
    // cout << "Prime number" << endl;
    // else
    // cout << "Not Prime number." << endl;

    // Logic 2: with for loop

    int n, count = 0;
    cout << "Enter your number: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime Number" << endl;
            count++;
            break;
        }
    }
    if (count == 0)
        cout << "Prime Number.";

    // From gemini
    // int n;
    // bool isPrime = true;

    // cout << "Enter your number: ";
    // cin >> n;

    // if (n <= 1)
    // {
    //     isPrime = false;
    // }
    // else
    // {
    //     for (int i = 2; i * i <= n; i++)
    //     { // sqrt(n) tak check karega
    //         if (n % i == 0)
    //         {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    // }

    // if (isPrime)
    //     cout << "Prime Number.";
    // else
    //     cout << "Not Prime Number.";

    cout << endl;
    return 0;
}