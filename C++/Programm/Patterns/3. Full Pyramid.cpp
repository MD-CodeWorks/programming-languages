// g++ "3. Full Pyramid.cpp" -o "3. Full Pyramid" && ./"3. Full Pyramid"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your num: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= n - i; j++ ){
            cout << " ";
        }
        for ( int k = 1; k <= (2 * i - 1); k++ ){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}