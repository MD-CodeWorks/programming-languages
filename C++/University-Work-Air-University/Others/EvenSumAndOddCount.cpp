// g++ EvenSumAndOddCount.cpp -o EvenSumAndOddCount && ./EvenSumAndOddCount
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, OddCount = 0;
    cout << "Enter your number: ";
    cin >> n;

    for ( int i = 0; i < n; i++ ){
        if ( i % 2 == 0 ){
            sum += i;
        }
        else {
            OddCount++;
        }
    }
    
    cout << "Your sum is: " << sum << endl;
    cout << "Odd Count: " << OddCount << endl;

    cout << endl;
    return 0;
}