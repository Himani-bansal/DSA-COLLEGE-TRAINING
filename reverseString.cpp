#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string you want reverse of" << endl;
    cin >> str;
    int size = str.length();

    for (int i = 0; i < size / 2; i++)
    {
        if (i < size)
        {
            char temp = str[i];
            str[i] = str[size - i - 1];
            str[size - i - 1] = temp;
        }
    }
    cout << str;
}