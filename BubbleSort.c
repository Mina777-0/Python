#include <stdio.h>
#include "cs50.h"
#include <string.h>

#define N 5

void Bubble(int a[]);

int main()
{
    int a[N];
    for(int i = 0; i < N; i++)
    {
        a[i] = get_int("enter a number: ");
    }

    Bubble(a);
}

void Bubble(int a[])
{
    int b;
    int j;
    for(int i = 0; i < N; i++)
    {
        for(j = 0; j < N - i -1; j++)
        {
            if(a[j] < a[j+1])
        {
            b = a[j];
            a[j] = a[j+1];
            a[j+1] = b;
        }
        
        }
        printf("%i", a[j]);
    }
    
    
}