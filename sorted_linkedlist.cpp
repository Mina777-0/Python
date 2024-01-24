#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>


using namespace std;

typedef struct node
{
    int number;
    struct node* next;
}
node;

void Sort(node* list, int S);

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        cout << "Command-line is missing";
    }
    
    node* list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int x = atoi(argv[i]);
            
        node* n = (node*) malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        
        n->number = x;
        n->next = NULL;

        n->next = list;
        list = n;
           
    }

   Sort(list, argc);
}


void Sort(node* list, int S)
{
    int N = 1;
    for (int j = 2; j < S; j++)
    {
        N+= j;
    }
    
    int i = 0;
    node* k = (node*) malloc(sizeof(node));
    node* sort = list;
    while (i < N)
    {
        node* temp = list->next;
        if (temp == NULL)
        {
            list = sort;
            temp = list->next;
        }
        
        if (list->number > temp->number)
        {
            k->number = list->number;
            list->number = temp->number;
            temp->number = k->number;
        } 
        list = list->next;    
        i++;
    }

    node* reader = sort;
    while (reader != NULL)
    {
        cout << reader->number <<"\n";
        reader = reader->next;
    }
}