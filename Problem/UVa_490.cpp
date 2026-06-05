#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:C6031)

int main() {
    char s[105][105];
    int n = 0, max = 0;

    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) s[i][j] = ' ';
    }

    while (fgets(s[n], 105, stdin)) {
        int len = strlen(s[n]);
        if (s[n][0] == '\n' || s[n][0] == '\r') break;
        
        if (s[n][len - 1] == '\n') {
            s[n][len - 1] = '\0'; 
            len--;
        }

        if (len > max) max = len;
        n++;
    }

    for (int i = 0; i < max; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (s[j][i] == '\0' || s[j][i] == '\n') {
                s[j][i] = ' ';
            }
            putchar(s[j][i]);
        }
        putchar('\n');
    }

    return 0;
}


