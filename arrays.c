// int numbers[10] defines an array of 10 integers, accessing a num from it is done with the same syntax
//

#include <stdio.h>

int main() {
	int average;
	int grades[3]; // must always add one extra byte to your buffer 
	grades[0] = 100;
	grades[1] = 58;
	grades[2] = 84;
	average = (grades[0] + grades[1] + grades[2]) / 3;
	printf("%d", average);
	return 0;	
}
