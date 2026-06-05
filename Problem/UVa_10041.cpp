#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

/*
	your face is scary
	r (0 < r < 500)
	 (0 < si < 30000 )
*/
// use for qsort
int sort(const void* a, const void* b) { //int a is the first int, b is the 2nd int
	return (*(int*)a - *(int*)b); //  it subtracts them, if a>b then it'll be positive, if it'll be negative
}	

int main() {
	int T = 0; //test case
	int r = 0; //relative ints
	int arr[500];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) { //loop for the case
		scanf("%d", &r);
		for (int j = 0; j < r; j++) { //the relative
			scanf("%d", &arr[j]);
		}

			qsort(arr, r, sizeof(int), sort);//had google help me with qsort, but i think i understand it pretty well
			//it's qsort( the array,how many elements, the size of the element )
			
			int median = arr[r / 2]; //set the median to the middle of the relative
			int distance = 0;
			for (int j = 0; j < r; j++) {
				distance += abs(arr[j] - median); //the new distance counted from arr[j]-median is added with the previous distance 
			}
			printf("%d\n", distance);
	}
	return 0;
}
