// g++ ReverseNumber.cpp -o ReverseNumber && ./ReverseNumber
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ){
        cout << i << endl;
    }

    cout << "Reverse Order your number."<< endl;
    for ( int j = n; j >= 1; j-- ){
        cout << j << endl;
    }

    cout << endl;
    return 0;
}