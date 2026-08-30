/*
3. Function to check Even/Odd (Return Result)
Ye task pichli activity se thora mukhtalif hai kyunke is mein print function ke andar nahi, balkay main() mein karna hai.

Logic: 1.  Function sirf check karega: if (num % 2 == 0).
2.  Returning Logical Results: Bajaye "Even" likhne ke, function true (ya 1) return karega agar even hai, aur false (ya 0) agar odd hai.
3.  Main Function ka kaam: main() function is result ko pakre ga.
* Agar function ne true bheja, to main print karega: "Number is Even".
* Agar false bheja, to print karega: "Number is Odd".
*/

// g++ "Check Even-Odd.cpp" -o "Check Even-Odd" && ./"Check Even-Odd"
#include <iostream>
using namespace std;

bool evenOdd(int n){
    return ( n % 2 == 0 );
}

int main() {
    int n;
    cout << "Enter the num: ";
    cin >> n;

    if (evenOdd(n)) cout << "This num is Even.";
    else cout << "This num is Odd.";

    cout << endl;
    return 0;
}