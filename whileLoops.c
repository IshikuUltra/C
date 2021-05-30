// While loops have less functionality than its counterpart 'for'. 

#include <stdio.h>

int main() {
	int n = 0;
	while ( n < 10) {
		if (n > 5) {
			break;
		}
		n++;
	}
	return 0;
}
