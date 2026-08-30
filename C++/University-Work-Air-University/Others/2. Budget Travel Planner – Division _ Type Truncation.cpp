// g++ A.cpp -o A && ./A

#include<iostream>
using namespace std;

int main(){
    double collection, pricePerLiter, totalLiters;
    char rankInput;
    cout << "Enter your available collection: ";
    cin >> collection;

    cout << "Enter the petrol price: ";
    cin >> pricePerLiter;

    if ( pricePerLiter > 0 ){
        totalLiters = collection / pricePerLiter;
    }
    else {
        totalLiters = 0;
    }

    cout << "Enter your travel rank (A, B, or C): ";
    cin >> rankInput;

    cout << "\n<--- Trip Planning Results --->" << endl;
    cout << "Exact liters: " << totalLiters << endl;
    cout << "Full liters Purchasable: " << int(totalLiters) << endl;
    cout << "Your assigned travel rank: " << rankInput << endl;

    return 0;
}
