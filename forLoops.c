#include <stdio.h>

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	for (int i=0; i < 10; i++) {
		sum += arr[i];
	}
	printf("Sum of array arr is %d\n", sum);

	//factorial challenge 
	int factorialSum = 0;
	for(int i=10; i > 0; i--) {
		factorialSum += i;
	}
	printf("10! is %d\n", factorialSum);	

	return 0; 
}
