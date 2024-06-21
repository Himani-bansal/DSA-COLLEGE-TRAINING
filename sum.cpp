#include <iostream>
using namespace std;

int s(int arr[], int n, int index)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return arr[index] + s(arr, n - 1, index + 1);
    }
}

int main()
{
    int arr[] = {5, 3, 7, 9};
    int index = 0;
    int n = 4;
    int result = s(arr, n, index);
    cout << result;
}