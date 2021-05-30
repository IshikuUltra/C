#include <stdio.h>

int main(void) {
	int a = 1025;
	int *p = &a;
	printf("size of integer is %d bytes \n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);
	char *p0; // pointer p0 that can pull 1 byte of data from an address;
	p0 = (char*) p; //typecasting
	printf("size of char is %d bytes \n", sizeof(char));
	printf("address = %d, value = %d \n", p0, *p0);
//1025 = 00000000 00000000 00000100 00000001 -> so by typecasting 'p' were saying grab the first byte which is 1: this is because (1*2^10 + 1*2^0) = 1024 + 1
	return 0;
}

