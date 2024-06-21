#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "localization";
    int n = str.size();

    if (n > 10)
    {
        cout << str[0] << " ";
        cout << n - 2 << " ";
        cout << str[n - 1];
    }
    else
    {
        cout << str;
    }
}