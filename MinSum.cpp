#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;


int main()
{
    int arr[] = {1,6,11,5};
    int S = sizeof(arr)/sizeof(int);
    int k = arr[0];
    int min;
    for (int i = 0; i < S; i++)
    {
        if (k < arr[i])
        {
            k = arr[i];
        }
        
    }
    int sum = 0;
    for (int i = 0; i < S; i++)
    {
        if (k > arr[i])
        {
            sum += arr[i];
        }
        
    }
    if (sum > k)
    {
        min = sum - k;
    }
    else
    {
        min = k - sum;
    }
    
    
        cout << sum << "\n";
        cout << k << "\n";
        cout << min;

}