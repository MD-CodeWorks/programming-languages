// g++ "8. Diamond Pattern.cpp" -o "8. Diamond Pattern" && ./"8. Diamond Pattern"
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your num: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
        for (int l = 1; l <= i - 1; l++)
        {
            cout << " ";
        }
        for (int m = 1; m <= 2 * n - i + 1; m++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}