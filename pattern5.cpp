#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;

    for (int i = 1; i <= 2 * n; i++)
    {

        int rp = -1;
        if(i%2) rp = rp *(-1);
        int cp = 1;

        for (int j = 1; j <= n; j++)
        {

            if (cp == 1)
            {
                cout << "##";
            }
            else
            {
                cout << "..";
            }
            cp = cp * (-1);
        }
        cout << endl;
    }
}
