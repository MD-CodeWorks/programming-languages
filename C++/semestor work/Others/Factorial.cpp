/*
---------- Note -----------
Standard int data type ki capacity is baat par depend karti hai ke aapka system ya programming language kitne bits use kar rahi hai
    32-bit Integer: Yeh sirf 12! tak support karta hai. (13! iski limit se bahar nikal jata hai).
    64-bit Integer: Yeh 20! tak support karta hai. (21! iski limit cross kar deta hai).
Agar aap Python use kar rahe hain, to usmein int ki koi fixed limit nahi hoti; yeh aapki computer memory ke mutabiq jitna bada chahen factorial calculate kar sakta hai.
Magar C, C++, ya Java jaise languages mein upar di gayi limits apply hoti hain.
*/

// g++ Factorial.cpp -o Factorial && ./Factorial
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the num: ";
    cin >> n;

    int fac = 1;

    for ( int i = 1; i <= n; i++ ){
        fac *= i;
    }

    cout << "Factorial of " << n << " is: " << fac;

    cout << endl;
    return 0;
}