#include <stdio.h>

int main() {
	//general form of multidimdensional arrs: 'type name[size1][size2]...[sizeN];
	int foo[1][2][2] = { { {1} } };
	char vowels[1][5] = {
		{'a', 'e', 'i' ,'o', 'u'}
	};
	printf("%d", foo[0][0][0]);
	return 0;
}
