/*

*/

// g++ "Calculate sum of digits of a number.cpp" -o "Calculate sum of digits of a number" && ./"Calculate sum of digits of a number"
#include <iostream>
using namespace std;

void sumNum(int num){
    int lastD = 0, sum = 0;

    while (num > 0){
        lastD = num % 10;
        num = num / 10;
        sum += lastD;
    }
    cout << sum ;
}

int main() {
    int n; 
    cout << "Enter the num: ";
    cin >> n;

    sumNum(n);

    cout << endl;
    return 0;
}