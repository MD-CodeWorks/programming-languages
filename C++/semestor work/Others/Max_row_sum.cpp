// g++ p.cpp -o p && ./p

#include<iostream>
using namespace std;

int main(){
    int matrix [4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int cols = 3;
    int maxRowSum = 0, maxRowIndex = 0;

    for ( int r = 0; r < rows; r++ ){
            int sum = 0;
        for ( int c = 0; c < cols; c++ ){
            // cout << matrix [r][c] << " ";
            sum += matrix [r][c];
        }
        cout << "sum of row " << r << " is: " << sum << endl;
        if ( maxRowSum < sum ){
            maxRowSum = sum;
            maxRowIndex = r;
        }
    }

    cout << "The Maximum Row Sum is: " << maxRowSum << endl;
    cout << "Row Index Number: " << maxRowIndex;

    return 0;
}
