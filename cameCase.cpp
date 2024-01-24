#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    string text;
    string new_text = "";
    char a = '_';

   cout << "write the text: ";
   getline(cin, text);


   for (int i = 0; i < text.length(); i++)
   {
      if (isupper(text[i]))
      {
         new_text += a;
         new_text += tolower(text[i]);
         
      }

      else
      {
         new_text += text[i];
      }
      
   }

   cout << "snake_case: " << new_text;
   
}