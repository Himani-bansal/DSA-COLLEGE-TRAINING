#include <iostream>
using namespace std;

int main()
{
    char *c[] = {"ening", "nst", "amazi", "firbe"};
    char **cp[] = {c + 3, c + 2, c + 1, c};
    char ***cpp = cp;

    cout << **++cpp<<endl;
    cout << (*((*++cpp) - 1) + 3);
}