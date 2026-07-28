// g++ "4. Inverted Right Half pyramid.cpp" -o "4. Inverted Right Half pyramid" && ./"4. Inverted Right Half pyramid"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your num: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= n + 1 - i ; j++ ){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}