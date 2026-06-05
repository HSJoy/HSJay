#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char ch;
    int cnt;
} Letter;

int compare(const void* a, const void* b) {
    Letter* x = (Letter*)a;
    Letter* y = (Letter*)b;

    if (x->cnt != y->cnt)
        return y->cnt - x->cnt;

    return x->ch - y->ch;
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // remove newline

    int freq[26] = { 0 };
    char line[1000];

    for (int i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin);

        for (int j = 0; line[j] != '\0'; j++) {
            if (isalpha(line[j])) {
                char c = toupper(line[j]);
                freq[c - 'A']++;
            }
        }
    }

    Letter letters[26];
    int size = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            letters[size].ch = 'A' + i;
            letters[size].cnt = freq[i];
            size++;
        }
    }

    qsort(letters, size, sizeof(Letter), compare);

    for (int i = 0; i < size; i++) {
        printf("%c %d\n", letters[i].ch, letters[i].cnt);
    }

    return 0;
}
