#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str = "rcar";
    // cout << "Enter the string" << endl;
    // cin >> str;
    int first = 0;
    int last = str.size() - 1;
    bool ispalingdrome = true;

    while (last > first)
    {
        while ((last > first) && isspace(str[first]))
        {
            first++;
        }

        while ((last > first) && isspace(str[last]))
        {
            last--;
        }

        if (tolower(str[first]) != tolower(str[last]))
        {
            ispalingdrome = false;
            break;
        }
        first++;
        last--;
    }
    if (ispalingdrome)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}