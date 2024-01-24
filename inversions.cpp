#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <iomanip>
using namespace std;

/*
This algorithm find the number of inversions in an array. inversions are the number and its less adjacent pair.
like in the example below the in versions are (5,2),(5,1),(5,3),(2,1),(7,1),(7,3)
the array doesn't reverse like I can't have (7,2) nor (7,5)
*/
void majority(int arr[], int S);

int main()
{
    int a[] = {5,2,7,1,3};
    int N = sizeof(a)/sizeof(int);
    majority(a, N);
}

void majority(int arr[], int S)
{
    int k;
    int total = 0;
    for (int i = 0; i < S; i++)
    {
        k = arr[i];
        for (int j = i; j < S-1; j++)
        {
            if(k > arr[j+1])
            {
                total += 1;
            }
        }
    }

    cout << "This array has " << total << " iversions"<< "\n";
    
    
}

//There is another way instead of using an int K

/*
int Inverse(int arr[], int S)
{
    int total = 0;

    for (int i = 0; i < S-1; i++)
    {
        for (int j = i; j < S-1; j++)
        {
            if (arr[j+1] < arr[i])
            {
                total += 1;
            }
            
        }
        
    }

    return total;
    
}


*/