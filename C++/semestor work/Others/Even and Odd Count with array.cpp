/*
1. Even/Odd Count (Ginti ki logic)
Iska maqsad ye dekhna hai ke array mein kitne numbers jift (even) hain aur kitne taaq (odd).

Logic: Aap do counters banate hain: even_count = 0 aur odd_count = 0.

Loop: Array ke har element ko bari bari check karein.

Condition: Check karein ke number 2 se poora divide hota hai ya nahi (Modulo operator % use karke).

Agar number % 2 == 0 hai, to even_count mein 1 jama kar dein.

Nahi to, odd_count mein 1 jama kar dein.
*/

// g++ "Even and Odd Count with array.cpp" -o "Even and Odd Count with array" && ./"Even and Odd Count with array"
#include <iostream>
using namespace std;

int main() {
    int size, evenCount = 0, oddCount = 0;
    
    cout << "Enter the array size: ";
    cin >> size;
    
    int num[size];
    
    for ( int i = 0; i < size; i++ ){
        cout << "Enter number 0" << i + 1 << ": ";
        cin >> num[i];

        if ( num[i] % 2 == 0 )
        evenCount++;
        else
        oddCount++;
    }

    cout << endl;
    cout << "Total Even num is: " << evenCount << endl;
    cout << "Total Odd num is: " << oddCount << endl;

    cout << endl;
    return 0;
}