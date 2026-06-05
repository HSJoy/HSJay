#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 3000 

/*
	sequence n>0
	difference  on all the values 1 through n − 1

*/

int main() {
	int n;
	int arr[MAX]; //array
	int diff[MAX]; //

	while (scanf("%d", &n) == 1) { //input sequence amount

		// loop to insert array
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]); //input sequence
		}

		//to reset the difference so it won't affect the next code
		for (int i = 0; i < n; i++) {
			diff[i] = 0;
		}

		//loop to see the difference between each of the sequence
		for (int i = 0; i < n - 1; i++) {
			int d = abs(arr[i] - arr[i + 1]); //abs so it's not minus
			// arr[i]-arr[i + 1] the next array to see what the difference is
			//so like, if it's arr[1,4,2,3] then it'll be 3,2,1 and that's what d will be
			if (d >= 1 && d <= n - 1) { //check if d is valid
				diff[d] = 1; // it'll change the diff to 1	
			}
		}

		int jolly = 1;
		for (int i = 1; i <= n - 1; i++) {
			if (diff[i] == 0) { //if there's any diff that's 0 then it'll change jolly to 0 (false
				jolly = 0;
				break;
			}
		}

		if (jolly == 1)//if jolly is true then it'll print jolly
			printf("Jolly\n");
		else { // if it's not then it'll print that it's not
			printf("Not jolly\n");
		}
	}
	return 0;
}
