// Use cases for pointer variables.
// Lets use pointers as args in functions or argument by reference.

#include <stdio.h>
void Increment(int *p) {
	*p = (*p) + 1; // dereference
}
int main(void) 
{
	int a = 10; 
	Increment(&a); // pass the address of a to a pointer so it can update the value at that address.
	printf("*p++ = %d\n", a);

	return 0;
}
