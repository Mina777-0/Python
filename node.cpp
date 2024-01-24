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


int main(int argc, char** argv)
{
    node* list = NULL;
    
    for(int i = 1; i < argc; i++)
    {
        int x = atoi(argv[i]);

        node* n = (node*) malloc(sizeof(node));
        if(n == NULL)
        {
            return 1;
        }
        n->number = x;
        n->next = NULL;

        n->next = list;
        list = n;
    }

    node* ptr = list;
    
    while(ptr != NULL)
    {
        cout << ptr->number << "\n";
        ptr = ptr->next;
    }

    ptr = list;
    while (ptr != NULL)
    {
        node* next = ptr->next;
        free(ptr);
        ptr = next;
        
    }
}

