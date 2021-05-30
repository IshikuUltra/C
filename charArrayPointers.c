#include <stdio.h>
#include <string.h> // if you want to use string manipulation aka 'strlen' etc... this is your library.
// String: group of characters 
// Strings in 'C' must be terminated by a null charcter '\0'
void printArr(char * strArr) {
	printf("%s\n", strArr); 
}

void main() 
{
	char strLiteral[] = "This is a string literal";
	char charArray[] = {'S','A','M','\0'};
	char c[20];
	c[0] = 'J';
	c[1] = 'o';
	c[2] = 'h';
	c[3] = 'n';
	printArr(charArray);
//c[4] = '\0'; you used to have to terminate the string pre c99 but now they are auto terminating!
	printf("%s\n", c);
	printf("%s\n", charArray);
}
