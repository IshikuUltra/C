#include<stdio.h>
#include<stdlib.h>

void main(void) 
{
	int a; 
	int *p;
	p = (int*)malloc(sizeof(int)); // malloc returns a void* so we must typecast it too int*
	*p = 10;
	printf("Address of p: %p\nValue of p: %d\n", p, *p);
	// try updating value without freeing it.
	*p = 20;
	printf("Address of p: %p\nValue of p: %d\n", p, *p);
	free(p);
}
