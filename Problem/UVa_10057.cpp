#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int sorting(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;

    while (scanf("%d", &n) == 1) {

        int* A = (int*)malloc(n * sizeof(int)); //mallocation, to borrow and store big numbers
        int med1, med2, plus = 0, c ;

        for (int i = 0; i < n; i++) { //loop
            scanf("%d", &A[i]);
        }

        qsort(A, n, sizeof(int), sorting); //qsort

        if (n % 2 == 1) {   // n odd
            med1 = A[n / 2];

            for (int i = 0; i < n; i++) {
                if (A[i] == med1)
                    plus++;
            }

            c = 1;
        }
        else {
            med1 = A[n / 2 - 1];
            med2 = A[n / 2];

            for (int i = 0; i < n; i++) {
                if (A[i] == med1 || A[i] == med2) //if it;s the same with either than plus +1
                    plus++;
            }

            c = med2 - med1 + 1;
        }

        printf("%d %d %d\n", med1, plus, c);

        free(A);   //to free the malloc
    }

    return 0;
}

