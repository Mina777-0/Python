#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "cs50.h"
#include <ctype.h>

int main()
{
    string text = get_string("write a text: ");
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int key = get_int("enter the key: ");


    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            int x = text[i] - 97;
            int y = (x + key) % 26;
            char a = alphabet[y];
            printf("%c", a);
        }

        else if(text[i] >= 'A' && text[i] <= 'Z')
        {
            int z = text[i] - 65;
            int k = (z + key) % 26;
            char b = ALPHABET[k];
            printf("%c", b);
        }

        else{
            printf("%c",text[i]);
        }
    }

}