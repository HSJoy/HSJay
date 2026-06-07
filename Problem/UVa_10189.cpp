#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int n, m;
	int field_num = 1;
	while (true) {
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0)
			break;

		char board[110][110];
		//to read the board
		for (int i = 0; i < n; i++) {
			scanf("%s", board[i]);
		}

		if (field_num > 1) //add a space if the field is bigger than 1
			printf("\n");

		printf("Field #%d:\n", field_num); //print the field number

		for (int i = 0; i < n; i++) { //rows
			for (int j = 0; j < m; j++) { //columns
				if (board[i][j] == '*') { //for the bombs
					printf("*");
				}
				else {
					int count = 0;

					for (int changei = -1; changei <= 1; changei++) { //check all directions
						for (int changej = -1; changej <= 1; changej++) {
							int row_i = i + changei;
							int column_j = j + changej;

							if (row_i >= 0 && row_i < n && column_j >= 0 && column_j < m) {
								if (board[row_i][column_j] == '*')
									count++;
							}
						}
					}
					printf("%d", count);
				}
			}
			printf("\n");
		}
		field_num++;
	}

	return 0;
}
