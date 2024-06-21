#include <iostream>
using namespace std;

int main()
{
    int roll_no[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int paper[] = {2, 6, 0, 0, 2, 2, 0, 0, 0};
    int count;

    for (int i = 1; i <= 9; i++)
    {
        if (roll_no[i] == paper[i])
        {
            free(paper[i]);
        }
        else
        {
            count++;
        }
    }
}