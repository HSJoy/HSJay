#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int x1, x2, y1, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int sum1 = x1 + y1;
        int beginin = (sum1 * (sum1 + 1)) / 2 + x1;

        int sum2 = x2 + y2;
        int endin = (sum2 * (sum2 + 1)) / 2 + x2;
        int diff = endin - beginin;

        printf("Case %d: %d\n", i, diff);
    }
    return 0;
}
