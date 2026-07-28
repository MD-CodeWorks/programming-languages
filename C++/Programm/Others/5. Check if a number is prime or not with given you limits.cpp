// g++ "Check if a number is prime or not with given you limits.cpp" -o "Check if a number is prime or not with given you limits" && ./"Check if a number is prime or not with given you limits"

#include <iostream>
using namespace std;

int main(){
	
	int a = 0, b = 0;
	cout << "Enter your start num: ";
	cin >> a;
	cout << "Enter your end num: ";
	cin >> b;
	
	for ( int i = a; i <= b; i++ ){
		for ( int j = 2; j < i; j++ ){
			if ( i % j == 0 ){
				break;
			}
		}
		if ( j == i ){
			cout << i << endl;
		}
	}
	
    return 0;
}
