// g++ ReversePattern.cpp -o ReversePattern && ./ReversePattern
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your num: ";
    cin >> n;

    // star "*" Pattern
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= n + 1 - i; j++ ){
            cout << "*";
        }
        cout << endl;
    }

    // Number Pattern
    int i = 1;
    while ( i <= n){
        int j = 1;
        while ( j <= n + 1 - i ){
            cout << n + 1 - i;
            j++;
        }
        i++;
        cout << endl;
    }
    cout << endl;
    return 0;
}