#include <iostream>
using namespace std;


int main()
{
    int a[] = {2,6,1,3,4,7};
    int N = sizeof(a) / sizeof(int);
    int k;
    for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-1; j++)
        {
            if(a[j] > a[j+1])
            {
                k = a[j];
            }
            else
            {
                k = a[j+1];
            }
        }
    }

    cout << k <<"\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-i; j++)
        {
            if (k == a[j])
            {
                k -= 1;
            }
        }
    } 
    cout << "the missing number is " << k;  


}