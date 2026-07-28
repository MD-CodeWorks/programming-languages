// g++ A.cpp -o A && ./A

#include<iostream>
using namespace std;

int main(){
    char Alpha;
    cout << "Enter your Character: ";
    cin >> Alpha;

    cout << "Your character value in ASCII is: " << int(Alpha) << endl;
    Alpha = Alpha + 5;
    cout << "Your character value in ASCII is +offset: " << int(Alpha) << endl;
    cout << "Now your character is: " << Alpha;
    return 0;
}
