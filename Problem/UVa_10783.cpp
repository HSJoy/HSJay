#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int T;
	int a=0, b=0;
	scanf("%d", &T);//tetst case
	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &a, &b);
		int total = 0;
		for (; a <= b; a++)
		{
			if (a % 2 != 0)//if odd{
				total += a;
		}
		printf("Case %d: %d\n", i, total);

	}
	return 0;
}
