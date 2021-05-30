#include <stdio.h>

int main() 
{
	int a = 10;
	int *p = &a;
	printf("%d\n", p); // if 'p' address is 2002
	printf("%d\n", p+1); // then p+1 is 2006 since it will jump to the next integer address which is 4 bits away aka the size of the integer is 4 bits;
	printf("The value at address p+1 is: %d\n", *p); // there is nothing stored at p+1 yet so garbage val returned
	// add a value to p+1;
	int *pPlusOne = &p+1;
	*pPlusOne = 1001; // the star gives us the value at that address.
	printf("p+1 = %d\n", pPlusOne); // 1001
}
