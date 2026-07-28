#include <iostream>
using namespace std;

int main(){
		
	for ( int j = 1; j <= 5; j++ ){
		int n = 0, i;
		cout << "Enter your number, which should you check the number: ";
		cin >> n;
		
		for ( i = 2; i < n; i++ ){
			if ( n % i == 0 ){
		 		cout << "Non prime" << endl;
		 		break;
			}
		}
		if ( i == n ){
			cout << "Prime" << endl;
		}
	}
    return 0;
}
