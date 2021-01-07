#include <stdio.h>
#include <stdlib.h>


typedef struct sllnode // struct sllnode is temporary var
{
    int number;
    struct sllnode *next;
} node; // node is the permanant name


int main(void) 
{
    
    node *list = NULL;
    node *newNode = malloc(sizeof(node)); // allocate memory to instantiate a node

    int push (int data) { // formal parameter, created on read and destroyed on exit.
        if (newNode == NULL) {
            return 1;
        };

        newNode->number = data; // can i read vars scoped outside of this function?
        newNode->next = NULL;
        list = newNode;
    };

    push(1);
    push(2)

    for(node *tmp = list; tmp != NULL; tmp = tmp->next) {
        printf("%i\n",tmp->number);
    };

}