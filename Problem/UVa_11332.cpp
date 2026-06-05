#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num;
    while (scanf("%d",&num) != EOF) {
        if (num == 0) break;
        while (num >= 10) {
            int n = 0;

            while (num > 0) {
                n= n+ (num % 10); 
                num= num/ 10;          
            }

            num = n; 
        }
        printf("%d\n", num);
    }
    return 0;
}
