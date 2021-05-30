#include <stdio.h>

void main(void) 
{
	// array manipulation with pointers
	int arr[5] = {0,1,2,3,4};
	arr[0] = 2;
	int item0 = *arr;
	for (int i = 0; i < 5; i++) {
		printf("Item %d = %d\n", i, arr[i]);
	}
	int *p = &arr; // now *p and arr share the same address	
	*(p+1) = 200; // get the second partitioned address from arr and change the value too 200
	printf("second item in arr: %d\n", arr[1]);
} 
