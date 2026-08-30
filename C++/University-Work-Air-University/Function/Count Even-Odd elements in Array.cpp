/*
Count Even/Odd elements in Array

Pehle aapne ye logic main mein likhi thi, ab isay ek function ke andar band karna hai.

Logic: Function ko puri array aur uska size pass karein.

Loop: Function ke andar ek loop chalayein jo $0$ se size-1 tak jaye.

Condition: Har element ko % 2 se check karein.

Tally: Do variables (evenCount, oddCount) mein izafa (increment) karte jayein.

Display: Function ke aakhir mein dono counts ko print kar dein.
*/

// g++ "Count Even-Odd elements in Array.cpp" -o "Count Even-Odd elements in Array" && ./"Count Even-Odd elements in Array"
#include <iostream>
using namespace std;

void countEO( int array[], int size){
    int countEven = 0, countOdd = 0;
    for ( int i = 0; i < size; i++ ){
        if ( array [i] % 2 == 0 )
        countEven++;
        else
        countOdd++;
    }
    cout << "Even num is " << countEven << endl;
    cout << "Odd num is " << countOdd << endl;
}

int main() {
    int myarray[5] = {23,83,88,83,92};
    int size = 5;
    countEO(myarray,size);

    cout << endl;
    return 0;
}