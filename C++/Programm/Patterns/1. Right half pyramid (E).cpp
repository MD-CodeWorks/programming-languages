// g++ "1. Right half pyramid (E).cpp" -o "1. Right half pyramid (E)" && ./"1. Right half pyramid (E)"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your num: ";
    cin >> n;

    // Star (*) Pattern
    cout << "Star (*) Pattern" << endl;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= i; j++ ){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Number Pattern
    // 1
    // 2 2
    // 3 3 3
    // ........
    cout << "Number Pattern" << endl;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= i; j++ ){
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Character Pattern
    // A
    // B B
    // C C C
    // ......
    cout << "Character Pattern" << endl;
    char ch = 'A';
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= i; j++ ){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    cout << endl;
    return 0;
}