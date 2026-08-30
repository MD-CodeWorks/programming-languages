// g++ "5. Inverted Left Half pyramid.cpp" -o "5. Inverted Left Half pyramid" && ./"5. Inverted Left Half pyramid"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your num: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= i - 1; j++ ){
            cout << " ";
        }
        for ( int k = 1; k <= n + 1 - i ; k++ ){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}