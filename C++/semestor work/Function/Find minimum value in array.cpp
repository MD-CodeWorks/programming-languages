/*
    ------- Find Minimum value in Array ----------

    Ye logic "Race" lagane jaisi hai. Hum farz kar lete hain ke pehla banda hi sab se chota hai, phir baqiyon se muqabla karte hain.
        Logic:Ek variable banayein min = array[0] (pehla element).
        Loop: Index $1$ se aakhir tak loop chalayein.
        Comparison: Check karein: if (array[i] < min).
            Agar current element min se bhi chota nikal aaye, to min ki purani value ko hata kar nayi choti value rakh dein (min = array[i]).
    Return: Loop khatam hone par jo value min mein bachi hogi, wo puri array ka sab se chota number hoga.
*/

// g++ "Find minimum value in array.cpp" -o "Find minimum value in array" && ./"Find minimum value in array"
#include <iostream>
using namespace std;

void findMin(int array[], int size){
    int Min = array [0];
    for ( int i = 0; i < size; i++ ){
        if ( Min > array[i] ) Min = array [i];
        
        //Min = Min likhna aik fazool step hai kyunki aap value ko uski apni hi value se overwrite kar rahe hain.
        // Is line ko na likhna hi behtar hai, kyunki professional code jitna saaf aur chota ho utna acha hota hai.
        // else Min = Min;
    }
    cout << "\nMinimum num is: " << findMin;
}

int main() {
    int size;
    cout << "Enter the size array: ";
    cin >> size;

    int myArray[size];
    for ( int i = 0; i < size; i++ ){
        cout << "Enter the num " << i+1 << ": ";
        cin >> myArray[i];
    }

    findMin(myArray, size);
    
    cout << endl;
    return 0;
}