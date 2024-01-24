#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

void Binary(int min, int max, int c);

int main()
{
    int max, min, x;

    cout << "enter a min number: ";
    cin >> min;
    cout << "enter a max number: ";
    cin >> max;
    cout << "enter a number: ";
    cin >> x;

    Binary(min, max, x);
}

void Binary(int min, int max, int c)
{
    if(max >= min)
    {
        if (c >= min && c <= max)
        {
            int mid = (min + max) / 2;

            if(c == mid)
            {
                cout << "Found";
            }
            else if (c > mid)
            {
                Binary(mid+1, max, c);
            }
            else
            {
                Binary(min, mid, c);
            }
        }   
        else
        {
            cout << "Not Found";
        } 
    }       
}
