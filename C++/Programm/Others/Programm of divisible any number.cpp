#include <iostream>
using namespace std;

int main(){
	
	int n = 0, n1 = 0;
	
	cout << "Enter your number: ";
	cin >> n;
	
	cout << "Enter your number which should you want divsible: ";
	cin >> n1;
	
	for ( int i = 1; i <= n; i++ ){	
		if ( i % n1 == 0 ){
			continue;
		}
		cout << i << endl;
	}
	
    return 0;
}
