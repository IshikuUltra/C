#include <stdio.h>

void main(void) {
	int p = 10;
	// what is a memory address? 0x34555 
	int *q;
	q = &p;
	printf("%d\n", q); // address of p
	printf("%d\n", *q); // 10
	printf("%d\n", p); //before dereferencing p = 10;
	*q = 12; // dereferencing
	printf("%d", p); // 12, changing the value at the address q points at;

}
