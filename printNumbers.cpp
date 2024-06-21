#include <iostream>
using namespace std;

void f(int b, int a)
{
    if (b < a)
        return;
    else
        cout << b << " ";
    f(b - 1, a);
}

int main()
{
    int b, a;
    cout << "Enter the value of b and a";
    cin >> b >> a;

    f(b, a);
}