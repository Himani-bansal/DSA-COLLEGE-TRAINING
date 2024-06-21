#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "enter the value of n" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
         for (int j = 2 * i - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (j = 1; j <= 2*(n-i)+1; j++)
        {
            if ( i == 1 || j == 1 || j == (2 * (n-i) + 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    for (int i = n-1; i >= 1; i --)
    {
        for (int j = 2 * i - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 2 * n - 1; j >= 2 * i - 1; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}