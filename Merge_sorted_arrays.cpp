#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

void PrintOut(int arr[], int S);

int main()
{
    int arr1[] = {0,1,5,8};
    int S1 = sizeof(arr1)/sizeof(int);
    int arr2[] = {2,6,9,10};
    int S2 = sizeof(arr2)/sizeof(int);
    int S3 = S1 + S2;
    int arr3[S3];
    
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < S1 && j < S2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k ++;
    }   

    while (i < S1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < S2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    PrintOut(arr3, S3);
}

void PrintOut(int arr[], int S)
{
    for (int i = 0; i < S; i++)
    {
        cout << arr[i]<<" ";
    }
    
}

