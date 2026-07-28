/*
Is function ka kaam ye check karna hai ke koi number zero se bara hai ya chota.

Logic: Function ko ek number (parameter) dein.

Condition: * Agar number > 0 hai, to wo Positive hai.

Agar number < 0 hai, to wo Negative hai.

Agar number == 0 hai, to wo neutral hai.

Modularization: Aap function ke andar hi cout karwa sakte hain (void function) ya phir koi message return kar sakte hain.
*/

// g++ "Check Positive-Negative.cpp" -o "Check Positive-Negative" && ./"Check Positive-Negative"

#include <iostream>
using namespace std;

void checkPosNeg(int n)
{
    if (n > 0)
        cout << "Positive";
    else if (n < 0)
        cout << "Negative";
    else
        cout << "Netural";
}

int main()
{
    int n;
    cout << "Enter your num: ";
    cin >> n;

    checkPosNeg(n);

    cout << endl;
    return 0;
}