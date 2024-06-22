#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

int main()
{
    int n, x;
    cout << "Enter the number you want multiple of " << endl;
    cin >> x;
    cout << "Enter the numberupto which  you want multiple of " << endl;
    cin >> n;

    int result = power(x, n);
    cout << "Power is" << result;
}
