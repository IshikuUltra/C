#include <stdio.h>
#include <stdlib.h>

//Represents a node;
typedef struct node
{
    int number;
    struct node *next;
} node;


int main(void) 
{
    
    node *list = NULL;
    
    node *n = malloc(sizeof(node));
    if (n == NULL) {
        return 1;
    };
    n->number = 1; // the "->" syntax is sugar for "n.number";
    n->next = NULL;
    list = n;

    n = malloc(sizeof(node));
    if(n == NULL) {
        return 1;
    };
    n->number = 2;
    n->next = NULL;
    list->next = n;

    n = malloc(sizeof(node));
    if(n == NULL) {
        return 1;
    };
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    for(node *tmp = list; tmp != NULL; tmp = tmp->next) {
        printf("%i\n",tmp->number);
    };

}