#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

int main()
{
    int a[] = {1,5,8,10};
    int k = 2;
    int N= sizeof(a)/sizeof(int);
    int b[N];
    
    for(int i = 0; i < N; i++)
    {
        if(a[i] < k)
        {
            b[i] = a[i] + k;
        }
        else
        {
            b[i] = a[i] - k;
        }
        cout << b[i] << " ";
    }
    cout << "\n";

    int x = b[0];
    for(int i = 0; i < N; i++)
    {
        if(x <= b[i])
        {
            x = b[i]; 
        }       
    }

    int y = b[0];
    for(int i = 0; i < N; i++)
    {
        if(y >= b[i])
        {
            y = b[i];
        }
    }

    int z = x - y;
    cout << x <<"\n"; 
    cout << y << "\n";
    cout <<"the output is " << z;

}