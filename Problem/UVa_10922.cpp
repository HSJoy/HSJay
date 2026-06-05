#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main() {
    char num[1001];
    char ori[1001];

    while (scanf("%s", num)) {
        if (num[0] == '0' && num[1] == '\0') break;

        int degree = 0;
        int sum;
        int j = 0;

        while (num[j] != '\0') {
            ori[j] = num[j];
            j++;
        }
        ori[j] = '\0';

        while (1) {
            sum = 0;

            for (int i = 0; num[i] != '\0'; i++) {
                sum += num[i] - '0'; 
            }

            degree++; 

            if (sum < 10) break; 
            int temp = sum; 
            int len = 0;
            char newnum[20];

            while (temp > 0) {
                newnum[len++] = (temp % 10) + '0';
                temp /= 10;
            }

            for (int i = 0; i < len; i++) {
                num[i] = newnum[len - i - 1];
            }
            num[len] = '\0';
        }

        if (sum == 9)
            printf("%s is a multiple of 9 and has 9-degree %d.\n", ori, degree);
        else
            printf("%s is not a multiple of 9.\n", ori);
    }

    return 0;
}
