/*
3. Sorting (Tarteeb dene ki logic)

Numbers ko chote se bara (Ascending order) karne ke liye sabse common logic Bubble Sort hai.

Logic: Sath sath wale do numbers ka muqabla karein.

Swap (Adla-badli):

Agar pehla number apne agle number se bara hai (array[i] > array[i+1]), to in dono ki jagah badal (swap) dein.

Swap karne ke liye aapko ek Third Variable (Temp) ki zaroorat parti hai taake purani value gum na ho jaye.

Repeat: Ye amal tab tak chalate rahein jab tak sabse bara number aakhir mein na pahonch jaye. Phir yahi kaam baqi bache hue numbers ke liye karein.
*/

// g++ Sorting.cpp -o Sorting && ./Sorting
#include <iostream>
using namespace std;

int main() {
    int num[5] = {2,77,12,83,88};
    int size = 5,Temp = 0;

    for ( int j = 0; j < size; j++ ){
        cout << num[j] << " ";
    }
    cout << endl;

    for ( int i = 0; i < size - 1 ; i++ ){
        for ( int j = 0; j < size - i - 1; j++ ){
            if ( num [j] > num [j+1] ){
                Temp = num[j];
                num[j] = num[j+1];
                num[j + 1] = Temp;
            }
        }
    }

    for ( int j = 0; j < size; j++ ){
        cout << num[j] << " ";
    }
    cout << endl;
    return 0;
}