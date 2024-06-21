#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want sum of" << endl;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
}