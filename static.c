// Static is a keyword in the C programming language. It can be used with variables and functions.
// By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase their scope up to the file containing them. 
// Static makes a variable Global essentially.

#include <stdio.h>

// Consider the following scenario - we want to count the runners participating in a race.

int runner() {
	int count = 0;
	count++;
	return count;
}

int runner1() {
	static int count1 = 1;
	count1++;
	return count1;
}

int main() {
	// See that count is not updated because it is removed from memory as soon as the funciton completes.
	printf("%d\n", runner());
	printf("%d\n", runner());
	
	// 'static' has made count available even after it runs, keeping its place in memory.
	printf("%d\n", runner1());
	printf("%d\n", runner1());

	return 0;
}
