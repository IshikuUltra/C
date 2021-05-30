#include <stdio.h>
// Integers - whole numbers which can be either pos or neg. Defined using char, int, short, long, long long
//unsigned integers - whole numbers which can only be positibe. Defined using 'unsigned char', 'unsigned int', 'unsigned short', 'unsigned long', or 'unsigned long long' 
//floating point nums - real numbers defined using 'float' and 'double'

// NOTE c does NOT have a bool type. It is defined using the following notation
//#define BOOL char
//#define FALSE 0 
//#define TRUE 1

// c uses arrays of characters to define strings, and will be explaineed in the strings seciton
//
//LETS DO SOME BASIC MATHS
//
int main() {
	int a = 0, b=1, c=2, d=3, e=4;
	a = b-c + d * e;
	printf("%d", a); //"%d" denotes a integer output.
	return 0;
}
