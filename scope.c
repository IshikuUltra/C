#include <stdio.h>

void Increment(int a) // if you want to modify 'a' here then you must pass 'a's address to a pointer '*a' here
{
	printf("Address of a in 'Increment': %d\n", &a);
}

int main(void) 
{
	int a = 19;
	Increment(a);
	printf("Address of a in main: %d\n", &a);
	
	return 0;
}
