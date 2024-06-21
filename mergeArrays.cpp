#include <iostream>
using namespace std;

int main()
{
//     int arr1[] = {1, 3, 5, 7, 9};
//     int arr2[] = {2, 4, 6, 8};

//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);
//     int i=0,j=0,k=0;
//     int size = size1+size2;
//     int ans[size];

//    while(i<size1 && j<size2 ){
//             if (arr2[j] > arr1[i])
//             {
//                 ans[k] = arr1[i];
//                 i++;
//                 k++;
//             }
//             else
//             {
//                 ans[k] = arr2[j];
//                 j++;
//                 k++;
//             }}
//             while (i < size1)
//             {
//                 ans[k] = arr1[i];
//                 k++;
//                 i++;
//             }
//             while (j < size2)
//             {
//                 ans[k] = arr2[j];
//                 k++;
//                 j++;
//             }
   
    

//     for (int i = 0; i < (size2 + size1); i++)
//     {
//         cout << ans[i];
//     }
 int arr1[9] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8};

    int size1 = 5;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int i=size1-1,j=size2-1,k=(size1+size2-1);
    

   while(i>=0 && j>=0 ){
            if (arr2[j] < arr1[i])
            {
                arr1[k] = arr1[i];
                i--;
                k--;
            }
            else
            {
                
                arr1[k--]=arr2[j--];
            }}
           
            while (j >= 0)
            {
                arr1[k] = arr2[j];
                k--;
                j--;
            }
   
    

    for (int i = 0; i < (size2 + size1); i++)
    {
        cout << arr1[i];
    }
}