#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[] = {5, 3, 7, 4, 6};

    for (int i = 0; i <= 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {

            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}