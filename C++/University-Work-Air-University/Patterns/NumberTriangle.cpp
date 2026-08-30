// g++ NumberTriangle.cpp -o NumberTriangle && ./NumberTriangle
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    for ( int i = 1; i <= n; i++ ){
        for( int j = 1; j <= i; j++ ){
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}