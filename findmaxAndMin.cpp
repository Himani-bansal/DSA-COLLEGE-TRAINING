#include <iostream>
using namespace std;

int main()
{

    int arr[] = {7, 1, -7, -17, 70, 190, 17, 102, -250, 25};
    int minIndex = 0;
    int maxIndex = 0;
    int min = 0;
    int max = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            // max = arr[i];
            maxIndex = i;
        }
        else if (arr[i] < arr[minIndex])
        {
            // min = arr[i];
            minIndex = i;
        }
    }
    cout << arr[maxIndex] << endl;
    cout << maxIndex << endl;

    cout << arr[minIndex] << endl;
    cout << minIndex << endl;

    
    while (minIndex != 0)
    {
        int temp = arr[minIndex];
        arr[minIndex] = arr[minIndex-1];
        arr[minIndex-1] = temp;
        minIndex--;
        min++;
    }
    while (maxIndex < 9)
    {
        int temp = arr[maxIndex];
        arr[maxIndex] = arr[maxIndex+1];
        arr[maxIndex+1] = temp;
        maxIndex++;
        max++;
    }

    cout << min<<endl;
    cout << max<<endl;

    for (int i = 0; i <= 9; i++)
    {
        cout << arr[i] << " ";
    }
}