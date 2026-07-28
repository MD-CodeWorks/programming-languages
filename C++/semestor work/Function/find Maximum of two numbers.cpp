/*
    --- Function to find Maximum of two numbers ---
Jab do numbers ka muqabla karna ho, to ye function batayega ke bara kaunsa hai.

Logic: Function do parameters lega (farz karein a aur b).

Comparison: * Check karein: if (a > b).

Agar ye sahi hai, to a bara hai.

Nahi to, b bara hai (ya dono barabar hain).

Return: Ye function aksar bara number return karta hai taake aap use baad mein kisi calculation mein use kar sakein.
*/

// g++ "find Maximum of two numbers.cpp" -o "find Maximum of two numbers" && ./"find Maximum of two numbers"
#include <iostream>
using namespace std;

void findMax(int n1, int n2){
    if ( n1 > n2 )
        cout << n1 << " is greater than " << n2;
    else if (n2 > n1)
        cout << n2 << " is greater than " << n1;
    else
        cout << "Both are equals.";
}

int main() {
    int n1,n2;
    cout << "Enter your two numbers: ";
    cin >> n1 >> n2;

    findMax(n1,n2);

    cout << endl;
    return 0;
}