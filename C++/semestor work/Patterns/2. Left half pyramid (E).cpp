// g++ "2. Left half pyramid (E).cpp" -o "2. Left half pyramid (E)" && ./"2. Left half pyramid (E)"
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your num: ";
    cin >> n;

    // Star (*) Pattern
    //      *
    //     **
    //    ***
    // ......
    cout << "Star (*) Pattern" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // Number Pattern
    cout << "Number Pattern" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    // Character Pattern
    //         A
    //       B B
    //     C C C
    //   D D D D
    // E E E E E
    cout << "Character Pattern" << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    cout << endl;
    return 0;
}