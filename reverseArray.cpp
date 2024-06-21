#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool ispalingdrome(string str)
{
    int last = str.length() - 1;
    int first = 0;

    while (last < first && isspace(str[first]))
    {
        first++;
    }
    while (last < first && isspace(str[last]))
    {
        last--;       
    }

    if (tolower(str[first]) == tolower(str[last]))
    {
        return true;
    }
    first++;
    last--;
    return false;
}

int main()
{
    string str = "race car";

    if (ispalingdrome(str))
    {
        cout << "It is Palingdrom" << endl;
    }
    else
    {
        cout << "Not palingdrome" << endl;
    }

    cout << str;
}
