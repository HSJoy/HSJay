#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_FIB_COUNT 45
#define MAX_INPUT_VAL 100000000

long long Fib_array[MAX_FIB_COUNT];
int Fib_count = 0;

void build_fib() {
    Fib_array[0] = 1;   
    Fib_array[1] = 2;   
    Fib_count = 2;

    for (int i = 2; i < MAX_FIB_COUNT; i++) {
        long long next = Fib_array[i - 1] + Fib_array[i - 2];
        if (next > MAX_INPUT_VAL) break;
        Fib_array[i] = next;
        Fib_count++;
    }
}

int main() {
    build_fib();

    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int ori_n;
        if (scanf("%d", &ori_n) != 1) continue;

        int n = ori_n;
        char fib_base[MAX_FIB_COUNT]; 
        int result = 0;

        int start = -1;
        for (int j = 0; j < Fib_count; j++) {
            if (Fib_array[j] <= n) start = j;
            else break;
        }

        if (start == -1) {
            printf("%d = 0 (fib)\n", ori_n);
            continue;
        }

        for (int j = start; j >= 0; j--) {
            if (n >= Fib_array[j]) {
                fib_base[result++] = '1';
                n -= Fib_array[j];
            }
            else {
                fib_base[result++] = '0';
            }
        }

        fib_base[result] = '\0';
        printf("%d = %s (fib)\n", ori_n, fib_base);
    }

    return 0;
}
