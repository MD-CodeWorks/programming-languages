/*
Is mein array ki values ko badalna nahi hai, sirf unhein ulti taraf se "dekhna" hai.

Logic: Array ko seedha print karne ke liye loop $0$ se size-1 tak jata hai.

Reverse Loop: Ulti printing ke liye loop ko aakhir se shuru karein:

start = size - 1

condition = index >= 0

step = index-- (har baar ek peeche jayein).

Action: Loop ke andar array[i] ko print karte jayein.
*/

// g++ "Print Array in Reverse Order.cpp" -o "Print Array in Reverse Order" && ./"Print Array in Reverse Order"
#include <iostream>
using namespace std;

void reverseOrder(int array[], int size){
    for (int i = size - 1; i >= 0; i--){
        cout << array[i] << " ";
    }
}

int main() {
    int myArray[5] = {3,92,0,83,88};
    int size = 5;

    reverseOrder(myArray,size);

    cout << endl;
    return 0;
}