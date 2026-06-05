#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		printf("%d\n", N + (N / 2));
	}

	return 0;
}
