// g++ MultiplicationTable.cpp -o MultiplicationTable && ./MultiplicationTable
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your Table Number: ";
    cin >> n;

    for ( int i = 1; i <= 10; i++ ){
        cout << n << " * " << i << " = " << n * i << endl;
    }
    cout << endl;
    return 0;
}