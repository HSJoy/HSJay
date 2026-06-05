#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	scanf("%d", &N); 
	for (int i = 0; i < N; i++) {
		int L; 
		scanf("%d", &L);

		int arr[50]; 
		for (int j = 0; j < L; j++) {
			scanf("%d", &arr[j]); 
		}
		int swap = 0; 
		if (L > 1) { 
			for (int j = 0; j < L - 1; j++) {
				for (int x = 0; x < L - 1 - j; x++) {
					
					if (arr[x] > arr[x + 1]) {
						int temp = arr[x];
						arr[x] = arr[x + 1];
						arr[x + 1] = temp; 
						swap++; 
					}
				}
			}
		}

		printf("Optimal train swapping takes %d swaps.\n", swap);
	}
	return 0;
}
