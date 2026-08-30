// g++ "6. Inverted full pyramid.cpp" -o "6. Inverted full pyramid" && ./"6. Inverted full pyramid"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your num: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= i - 1 ; j++){
            cout << " ";
        }
        for ( int k = 1; k <= 2 * (n - i) + 1 ; k++ ){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}