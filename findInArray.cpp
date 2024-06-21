#include <iostream>
using namespace std;

int find(int arr[], int x, int n, int index)
{
    if (index > n)
    {
        cout << "Not found";
    }
    else if (arr[index] == x)
    {
        cout << index;
    }

    else
    {
        return find(arr, x, n, index + 1);
        }
}

int main()
{
    int arr[] = {-9, 19, 8, 7, -2, 5, 6, 3, 9};
    int index = 0;
    int n = 9;
    int x;
    cout << "enter the element";
    cin >> x;
    find(arr, x, n, index);
}