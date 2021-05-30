#include <stdio.h>

int main() {
	int a; int *p;
	a = 10;
	p = &a;
	printf("Address P: %d\n", p);
	printf("Value at p: %d\n", *p);
	//dereference a through p;
	int b = 20;
	*p = b;
	printf("Address: %d\n", p);
	printf("Value: %d\n", *p); 
}
