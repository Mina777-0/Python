#include <iostream>
using namespace std;

void Sum(int a[], int N, int S);

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int N = 25; 
    int S = 10;

    Sum(a, N, S);
}

void Sum(int a[], int N, int S)
{
    int sum = 0;
    for (int i = 0; i < S; i++)
    {
        sum += a[i];

        if(sum < N)
        {
            continue;
        }

        else if(sum > N)
        {
            for (int j = 0; j < S; j++)
            {
                sum -= a[j];
                if (sum == N)
                {
                    cout << sum << " position from " << j+2 << " to " << i+1 << "\n";
                }
                
            }
            
        }
        else if (sum == N)
        {
            cout << "position " << 1 << " to " << i+1 << "\n";
            break;
        }
        
    }
    
}