#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int c;
    int word = 0;

    while ((c = getchar()) != EOF) {
        if (c == '"') {
            if (word % 2 == 0) {
                printf("``");
            }
            else {
              printf("''");
            }
            word++;
        }
        else {
            putchar(c);
        }
    }
    return 0;
}

