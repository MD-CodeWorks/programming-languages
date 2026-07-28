// g++ A.cpp -o A && ./A

/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the any Number: ";
    cin >> n;

    if ( n > 0 ){
        cout << "Positive Integer\n";
        if( n % 2 == 0 ){
            cout << "This is even number.";
        }
        else {
        cout << "This is Odd number.";
        }
    }
    else{
        cout << "This is Negative number.\n";
        if ( n % 2 == 0 ){
            cout << "This is even number.";
        }
        else{
            cout << "This is Odd Number.";
        }
    }

    return 0;
}*/

// From gemini
#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter any Number: ";
    cin >> n;

    // 1. Number ki Type check karna (Positive, Negative, or Zero)
    if (n == 0) {
        cout << "The number is Zero." << endl;
    }
    else if (n > 0) {
        cout << "Positive Integer" << endl;
    }
    else {
        cout << "Negative Integer" << endl;
    }

    // 2. Even/Odd ka logic (Sirf ek baar likha gaya hai)
    // Zero ko aksar mathematical context mein even treat kiya jata hai
    if (n % 2 == 0) {
        cout << "This is an Even number." << endl;
    }
    else {
        cout << "This is an Odd number." << endl;
    }

    return 0;
}
