#include<stdio.h>
#include "cs50.h"
#include <string.h>
#include <stdlib.h>

void Binary(int min, int max, int x);

int main()
{
    int x = get_int("enter a number: ");
    int min = get_int("enter a min number: ");
    int max = get_int("enter a max number: ");

    Binary(min, max, x);
}

void Binary(int min, int max, int x)
{
    int mid = (min + max) / 2;

    if(x > min && x < max)
    {

        if(x == mid)
        {
            printf("found");
        }

        else if(x < mid)
        {
            Binary(min, mid, x);
        }

        else if(x > mid)
        {
            Binary(mid, max, x);
        }
    }
    
    else
    {
        printf("Not Found");
    }
    
}
