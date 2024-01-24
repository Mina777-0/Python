#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

void swap(int* a, int* b);

int main()
{
    int* x = (int*) malloc(sizeof(int));
    int* y = (int*) malloc(sizeof(int));

    *x = 1;
    *y = 2;

    cout <<"x: "<< *x << "\n" <<"y: "<< *y<<"\n";
    swap(*x, *y);

    cout <<"x: "<< *x << "\n" <<"y: "<< *y;

    free(x);
    free(y);
}

void swap( int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

//The swap function that confused me before. Actually, 
//print the variables inside the swap function, defintely, 
//will return swapped values becuse the function pass only copies of the values, 
//but the original vlaues had not been swapped.
//when you call a function, you call the variables with theor values not their address(actually copies of their values). 
//when you print them out inside the main function, they show the same same vlaues. 
//but when the assigend values are to pointers, this waht makes the difference. 
//that's the power of pointers. they deal with addresses which can easily switch the vlaues whenever you can.

//another version of main function
//int main()

    //int x = 1;
    //int y = 2;

    //swap(&x, &y);
