#include <stdio.h>

int main() {
	int foo = 1;
	int bar = 9;
	// Other operators: ||, &&, !=

	if (foo < bar) {
		printf("foo is lt than bar.");
	} else if (foo == bar) {
		printf("Foo is et to bar");
	} else {
		printf("foo is gt bar"); 
	}
	return 0;
}
