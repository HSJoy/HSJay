#include <stdio.h>
#include <stdlib.h>

int main() {
	long x, y;

	while (scanf("%ld %ld", &x, &y) != EOF) {
		if (x > y) {
			printf("%ld\n", x - y);
		}
		else {
			printf("%ld\n", y - x);
		}
	}
	return 0;
}
