//C functions are simple, but because of how C works (being procedural), the power of functions is a bit limited. 
//functions receive either a fixed or variable amount of arguments.
//functions only return ONE value, or return NO value.
//in C arguments are copied by value to functions, which means we cannot change the arguments to aggect their value outside of the function. To do that, we must use pointers, which are taught later on.

#include <stdio.h>

int foo(int bar) {
	/* do something */
	return bar * 2;
}
// you can also declare a function and implement it later using a header file or in the beginnning of the c file.
//function declaration
int bb(int cc);

int main() {
	printf("The value of foo() is %d\n", foo(1));
	printf("The value of bb() is %d", bb(2));
}

int bb(int cc) {
	return (cc / 2) * 2;
}
