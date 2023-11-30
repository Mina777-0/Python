#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "cs50.h"


int Pennies(int a);
int Nickles(int a);
int Dimes(int a);
int Quarters(int a);

int main(){
    int x = get_int("Change owed: ");

    if(x < 0){
        main();
    }    
    else
    {
        printf("%i pennies ", Pennies(x));
        printf("%i nickles ", Nickles(x));
        printf("%i dimes ", Dimes(x));
        printf("%i qaurters ", Quarters(x));
    }
    
}
int Pennies(int a)
{
    if(a >= 1 && a <= 4)
    {
        return a;
    }

    else if (a >= 5)
    {
        return Pennies(a - 5);
    }

    else
    {
        return 0;
    }
    
}

int Nickles(int a)
{
    if(a >= 5 && a <= 9)
    {
        return 1;
    }

    else if (a >= 10 && a <=15)
    {
        return Nickles(a - 10);
    }

    else if (a > 15 && a < 20)
    {
        return Nickles(a - 10);
    }
    
    else if (a > 20)
    {
        return Nickles(a - 25);
    }

    else
    {
        return 0;
    }
    
}

int Dimes(int a)
{
    if(a >= 10 && a <=19)
    {
        return 1;
    }
    else if(a >= 20 && a <= 24)
    {
        return 2;
    }
    else if (a > 25)
    {
        return Dimes(a - 25);
    }
    else
    {
        return 0;
    }
    

}

int Quarters(int a)
{
    if(a >= 25 && a <= 49)
    {
        return 1;
    }
    else if (a >= 50 && a <= 74)
    {
        return 2;
    }
    else if (a >= 75 && a <= 99)
    {
        return 3;
    }

    else if (a >=100)
    {
        return 4;
    }
    else
    {
        return 0;
    }
    
}

