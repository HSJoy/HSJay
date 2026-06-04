#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int i = 0, j = 0, x = 0;

	while (scanf("%d %d", &i, &j) == 2) {
		int I_original = i;
		int J_original = j;

		int max = 0; 


		if (i > j) { 
			int swap = i;
			i = j;
			j = swap;
		}

		for (x = i; x <= j; x++) {
			int n = x; 
			int cycle = 1; 

		mulai: 
			if (n == 1)
				goto slesai;

			if (n % 2 != 0) 
				n = 3 * n + 1;

			else 
				n = n / 2;

			cycle++;

			goto mulai;

		slesai:
			if (cycle > max)
				max = cycle; 
		}

		printf("%d %d %d\n", I_original, J_original, max);
	}
	return 0;
}
