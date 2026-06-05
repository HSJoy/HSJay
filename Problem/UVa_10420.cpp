#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[100];
	int count;
} Country;

int compare(const void* a, const void* b) {
	Country* country1 = (Country*)a;
	Country* country2 = (Country*)b;
	return strcmp(country1->name, country2->name);
}

int main() {
	int n;
	while (scanf("%d", &n) != 1) return 0;
	Country list[2000];
	int total = 0;

	for (int i = 0; i < n; i++) {
		char countrynow[100];
		int test[100];

		scanf("%s", countrynow);
		scanf("%[^\n]", test);

		int found = 0;
		for (int j = 0; j < total; j++) {
			if (strcmp(list[j].name, countrynow) == 0) {
				list[j].count++;
				found = 1;
				break;
			}
		}
		if (!found) {
			strcpy(list[total].name, countrynow);
			list[total].count = 1;
			total++;
		}
	}

	qsort(list, total, sizeof(Country), compare);
	for (int i = 0; i < total; i++) {
		printf("%s %d\n", list[i].name, list[i].count);
	}

	return 0;
}
