#include <iostream>
using namespace std;

void multiple(int x, int n)
{
    if (n < 1)
        return;

    cout << x * n << " ";

    multiple(x, n - 1);
}

int main()
{
    int n, x;
    cout << "enter the number you want multiple of ";
    cin >> x;
    cout << "enter the number upto which you want multiple of ";
    cin >> n;

    multiple(x, n);
}