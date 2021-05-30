#include<stdlib.h>
#include<stdio.h>

int main(void) 
{
	// Ask user for size of array and print 0->n
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n); // Y do I have to save it to &n y not n?
	int *A = (int*)malloc(n*sizeof(int));
	for(int j=0; j<n; j++) {
		A[j] = j;
	}
	for(int i=0; i<n; i++) {
		printf("%d ", A[i]);
	}
	//if we initialize with 'calloc' then all elements will be set to 0;
	// WE CAN ALSO 'int *b = (int*)realloc(A, 2*n*sizeof(int));' this will reallocate all of a too *b wich is size 2*n*4
	free(A);
}
