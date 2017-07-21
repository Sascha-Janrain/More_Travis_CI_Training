/* This code is part of a Travis CI Tutorial.
 * When running effectively, it will print "5" to stdout */
#include <stdio.h>

int main(void) {
	int i = 1, j = 0;
	for (i = 1; i <= 5; i++) {
		j += 1;
	}
	printf("%d\n", j); 
}
