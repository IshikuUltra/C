#include <stdio.h>

int main(void) {
	int a = 1025;
	int *p = &a;
	printf("integer is %d bytes\n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);
	// void pointer = generic pointer;
	void *p0 = p; // note you cant typecast void pointers since they can never retrieve a val at an address
	// not you do not need the ampersand when getting the address with a void pointer since it's implied 
	printf("Address: %d\n", p0); 
	return 0;
}
