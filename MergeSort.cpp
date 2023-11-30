#include <iostream>
#include <cstring>
using namespace std;

void Merge(int a[], int s);
void Print(int a[], int s);

int main()
{
    int a[] = {2, 1 ,3};
    int x = sizeof(a) / sizeof(int);

    Merge(a, x);
    Print(a, x);
}


void Merge(int a[], int s)
{
    if(s > 1)
    {
        int s1 = s/2;
        int s2 = s - s1;

        int L[s1], R[s2];
        int i, j, k;

        for (i = 0; i < s1; i++)
        {
            L[i] = a[i];
        }

        for  (j = 0; j < s2; j++)
        {
            R[j] = a[j+s1];
        }
        
        Merge(L, s1);
        Merge(R, s2);

        i = 0, j = 0, k = 0;
        while (i < s1 && j < s2)
        {
            if (L[i] < R[j])
            {
                a[k] = L[i];
                i++;
            }
            else
            {
                a[k] = R[j];
                j++;
            }
            k++;
        }
        
        while (i < s1)
        {
            a[k] = L[i];
            i++;
            k++;
        }

        while (j < s2)
        {
            a[k] = R[j];
            j++;
            k++;
        }
        
    }

}

void Print(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
    
}

