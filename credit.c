#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "cs50.h"
#include <ctype.h>

const int N = 16;

int main()
{
    int a[N];
    int x[N];
    int z[N];
    for(int i = 0; i < N; i++)
    {
        a[i] = get_int("enter a number: ");
    }
    
    int sum1 = 0;
    int sum2 = 0;
    int total;

   
   for(int i = 0; i < N; i++)
   {
    if(i % 2 == 0)
    {
        x[i] = a[i];
        int xx = x[i] * 2;
        if(xx > 9)
        {
            int y = xx / 10 + xx % 10;
            sum1 += y;
        }
        else
        {
            sum1 += xx;
        }
    }
}

for(int i = 0; i < N; i++)
{
    if(i % 2 != 0)
    {
        z[i] = a[i];
        sum2 += z[i];
    }
}
 total = sum1 + sum2;
 printf("%i", total);
}