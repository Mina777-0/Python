#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <iomanip>
using namespace std;

void majority(int arr[], int S);

int main()
{
    int a[] = {3,1,3,3,2};
    int N = sizeof(a)/sizeof(int);
    majority(a, N);
}

void majority(int arr[], int S)
{
    int mean;
    int total = 0;

    if (S%2 == 0)
    {
        mean = S/2;
    }
    else
    {
        mean = (S/2) + 1;
    }
    
    
    for(int i = 0; i < S; i++)
    {
        int k = arr[i];
        for(int j = 0; j < S; j++)
        {
            if(k == arr[j])
            {
                total += 1;
            }
        }
    
        if(total >= mean)
            {
                cout << "the majority is " << k << "\n";
                break;
            }

        else 
            {
                total = 0;
            }
    }

    if(total == 0)
    {
        cout << "No majority" << "\n";
    }
    
    
}