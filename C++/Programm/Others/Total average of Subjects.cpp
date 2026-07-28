#include<iostream>
using namespace std;

int main(){
    int marks[2][3] = {{35,85,84},{83,84,66}};
    int sum, sum1, sum2, average, average1, average2;

    for ( int i = 0; i < 2; i++ ){
        for ( int j = 0; j < 3; j++ ){
            cout << marks[i][j];
        }
    }

    cout << endl;
    return 0;
}