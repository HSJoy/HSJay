#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		char a[35] = { 0 };
		char b[35] = { 0 };
		scanf("%s", &a);
		scanf("%s", &b);
		
		long long c = 0;
		long long d = 0;

		for (int j = 0; a[j] !='\0';j++)
		{
			c = c * 2 + (a[j] - '0');
		}
		for (int j = 0; b[j]!='\0';  j++)
		{
			d = d * 2 + (b[j] - '0');
		}

		long long temp = 0;
			if (d > c) {
				temp=c;
				c = d;
				d = temp;
			}
			while (d != 0) {
				long long temp = c % d;
				c = d;
				d = temp;
			}
			if (c > 1) {
				printf("Pair #%d: All you need is love!\n", i);
			}

			else{
				printf("Pair #%d: Love is not all you need!\n", i);
			}
	}
	return 0;
}
