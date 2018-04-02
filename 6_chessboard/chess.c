#include "stdio.h"

int main(void) {
	char board[8][8] = { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
						 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
						 ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
						 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' };
	
	for (int rank = 0; rank < 8; rank++) {
		for (int file = 0; file < 8; file++) {
			printf("%c ", board[rank][file]);
		}
		printf("\n");
	}

	return 0;
}
