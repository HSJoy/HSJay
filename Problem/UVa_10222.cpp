#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char keys[] = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./QWERTYUIOPASDFGHJKLZXCVBNM";
	char line[1000];//no overflow
	while (fgets(line, sizeof(line), stdin)) {
		for (int i = 0; line[i] != '\0'; i++) { //go through all the letters in the sentence
			if (line[i] == ' ') { //if there's space, keep the space
				printf(" ");
				continue;
			}
			int j;
			for (j = 1; keys[j] != '\0'; j++) { //if it's not at /0 the last one, it'll continue on
				if (line[i] == keys[j]) {
					printf("%c", keys[j - 2]);// num 2 keys before it
					break;
				}
			}
			if (keys[j] == '\0') { //for null
				printf("%c", line[i]);
			}
		}

	}
//got rid of \
	return 0;
}
