#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int a; // goes on stack
	int *p;
	// below 'p' is taking out 4 bytes of space from the heap
	p = (int*)malloc(sizeof(int)); // cast to int* bc void* is returned by default; 
	// fill the malloc'ed space that we took from heap with '10';
	*p = 10;
	// if you dont free malloced space it will stay reserved for the entire program life.
	free(p);
	p = (int*)malloc(sizeof(int));
	*p = 30;
	free(p);
	//to store an array in the heap we would do the following:
	p = (int*)malloc(20*sizeof(int)); // array of 20 integers we can still access with p[0] or *p or *(p+1)
	free(p);
}
