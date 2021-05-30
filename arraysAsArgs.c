#include <stdio.h>
					// The compiler takes 'int A[]' -> 'int *a' therefore either are valid in this scenario. 
int SumOfElements(int A[], int size) { // okay so array 'A' here is a pointer to the first element in the array it was passed.
	int i, sum = 0;
	//sizeof() returns the size of the variable in bytes -> since the passed 'A' here is a reference (pointer) to A[0] of A in 'main' it returns 8 bytes aka the size of pointer var
	printf("sizeof(A): %d, sizeof(A[0]): %d\n", sizeof(A), sizeof(A[0])); // this is why you must pass the size
	for(i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}

void main(void) {
	int A[] = {1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);
	int total = SumOfElements(A, size); // Arrays are 'passed by reference' since they are usually large in size.
	printf("Total: %d\n", total);
}
