#include<stdio.h>
#include<stdlib.h>

void main(void) {
	// okay so multidimensional arrays and pointers;
	int b[2][3] = {{1,2,3},{1,2,3}}; // this is a 2d array of 3 integers
	int (*p)[3] = b; 
	printf("%p\n",&b[0]);// starting address of the arrays;
	
	for(int i=0; i< 3; i++) {
		printf("Address: %p, Value: %d\n",(void*)&b[0][i], (void*)b[0][i]); // address and value of array0;
		printf("Address: %p, Value: %d\n", (void*)&b[1][i], (void*)b[0][i]); //address and value of array 2
	}
	printf("Value b[0][0]: %d, at: %p\n", b[0][0], (void*)&b[0][0]);
	printf("Value b[0][2]: %d, at: %p\n", b[0][2], (void*)&b[0][2]);
	// Okay so if we step to b[0][3] (prediction) will be a \0
	printf("Value b[0][3]: %d, at: %p\n", b[0][3], (void*)&b[0][3]);
	printf("b[0][4]: %d, at: %p\n", b[0][4], (void*)&b[0][4]);
	//Dereference an entire array?:
	printf("b[1][0->2] = %d\n", *(b[1])); // Same as &b[1][0]
	printf("%d\n", *(b+1)+2); // this same as &b[1][2] 
	printf("%d\n", *(*b+1)); // same as b[0][1] -> 
}	// int b[2][3] -> b[i][j] = *(b[i]+j) = *(*(b+i)+j) -> b[i] = *(b+i) 
