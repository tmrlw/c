#include "stdio.h"
#include "printx.h"

void printparab(void);

int main(void) {
	printparab();

	return 0;
}

void printparab(void) {
	int a, b, c;

	printf("\na*x^2 + b*x + c\n\na = ");
	scanf("%i", &a);
	printf("b = ");
	scanf("%i", &b);
	printf("c = ");
	scanf("%i", &c);
	printf("\n");

	printf("| x = -10\n");
	for (int x = -10; x < 10 + 1; x++) {
		printf("|");
		printx(a * x * x + b * x + c, "O");
	}
	printf("| x = 10\n\n");
}
