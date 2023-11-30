#include <stdio.h>
#include "cs50.h"
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string cipher = "JTREKYAVOGDXPSNCUIZLFBMWHQ";
    string text = get_string("write a tex: ");
    printf("ciphered text: ");

    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            int x = text[i] - 97;
            char a = cipher[x];
            printf("%c", a);
        }

        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            int y = text[i] - 65;
            char b = cipher[y];
            printf("%c", b);
        }

        else
        {
            printf("%c", text[i]);
        }
        
    }
}