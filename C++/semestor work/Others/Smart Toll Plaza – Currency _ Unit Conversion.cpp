// g++ A.cpp -o A && ./A

#include<iostream>
using namespace std;

int main(){
    double pounds, KG, taxRate;
    cout << "Enter your weight in pounds: ";
    cin >> pounds;

    KG = pounds / 2.20462;
    taxRate = KG * 5.75;

    cout << "weight in KG: " << KG << endl;
    cout << "Exact Tax: " << taxRate << endl;
    cout << "Final payable amount: " << int(taxRate);
    return 0;
}
