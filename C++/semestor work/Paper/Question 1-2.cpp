/*

*/

// g++ "Question 1-2.cpp" -o "Question 1-2" && ./"Question 1-2"
#include <iostream>
using namespace std;

int Length(char *a){
    int count = 0;
    for ( int i = 0; i <= a; i++ ){
        count++;
    }
    return count;
}
void LowerCase(char *a){
    
}

int main() {
    system("clear");
    char characterArray[100];
    cout << "Enter your Characters/Names: ";
    cin >> characterArray;
    
    Length(characterArray);
    LowerCase(characterArray);


    cout << endl;
    return 0;
}