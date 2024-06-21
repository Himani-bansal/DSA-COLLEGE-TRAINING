#include <iostream>
using namespace std;

void multiple(int x, int n,int count)
{
    if (count > n)
        return;

    cout << x*count  << " ";
    count++;

    multiple(x, n,count);
}

int main()
{
    int count =1;
    int n, x;
    cout << "enter the number you want multiple of ";
    cin >> x;
    cout << "enter the number upto which you want multiple of ";
    cin >> n;

    multiple(x, n,count);
}