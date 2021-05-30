#include <stdio.h>

int main(void) 
{
	int x = 5;
	int* p = &x;
	*p = 6;
	int **q = &p; // define a pointer type q that points at a pointer
	int ***r = &q; // define a pointer type r that points to a pointers pointer;
	printf("Address of p: %d, Value of p: %d\n", p, *p);
	printf("Q is: %d, Address of q: %d, Value of q: %d\n", q, *q, *(*q));
	printf("R is: %d, First reference point of r: %d, Second reference point of r: %d, the value at X is: %d\n",r, *r, **r, **(*r));
	***r = 10;
	printf("x = %d\n", x);

	return 0;
}
