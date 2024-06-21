#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    int sum = 0;

    cout << "Enter the limit up to which you want to print prime numbers: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are:" << endl;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " "<<endl;
            sum = sum + i;
        }
    }
    cout << sum;

    return 0;
}
