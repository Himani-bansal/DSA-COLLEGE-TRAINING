#include <iostream>
using namespace std;

int find(int arr[], int index, int n)
{
    if (index == n - 1)
        return -1;

    int y = find(arr, index + 1, n - 1);

    if (arr[index] % 3 == 0)
    {
       if(y=-1 || arr[index]<y)
    }
   
}

int main()
{
    int arr[] = {5, 10, 6, 8, 9};
    int index = 0;
    int n = 5;

    int x = find(arr, index, n);
    cout << x;
}