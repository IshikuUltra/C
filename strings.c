#include <stdio.h>
#include <string.h>

int main() {
	// strings in c are actually arrays of characters. Although using pointers in c is an advanced subject, we will use pointers to a character array to define simple strings, in the following manner: 
	char * name1 = "John Smith"; // a string thats read only 
	// the empty bracket notation tells the compiler to calculate the size of the array automatically.
	char name[] = "John Smith"; // a string that can be manipulated.

	// A LENGTH FUNCTION! HAZZAH! 'strlen' returns the length of the passed string
	char * name0 = "Nikhil";
	int len = strlen(name0);
	printf("Length of |%s| is %d\n", name0, len);
	
	//String Comparison
	// 'strcmp' compares two strings, if equal it returns 0, if != then 1;
	int isEqual = strncmp("john", "david", 5);
	if (isEqual == 0) {
		printf("Hello John!\n"); 
	} else {
		printf("Go away david\n");
	};

	//string concatination using 'strncat' appends first n chars of 'src' string to 'destination' string where 'n' is min(n, length(src)); 
	char *jeff = "Jeff"; 
	char hiJeff[] = "Hello"; // '[]' tells compiler to calculate space needed at compilation time;
	strncat(hiJeff, jeff, 4);
	printf("%s\n", hiJeff);

	return 0;
}
