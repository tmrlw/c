#include "stdio.h"
#include "printx.h"

void linear(void);
void parab(void);

int main(void) {
	linear();
	parab();

	return 0;
}

void linear(void) {
	int m, b;

	printf("mx+b\nm: ");
	scanf("%i", &m);
	printf("b: ");
	scanf("%i", &b);
	printf("\n");

	for (int x = 0; x < 10 + 1; x++) {
		printx(m * x + b, "O");
	}
}

void parab(void) {
	int a, b, c;

	printf("axx+bx+c\na: ");
	scanf("%i", &a);
	printf("b: ");
	scanf("%i", &b);
	printf("c: ");
	scanf("%i", &c);

	for (int x = 0; x < 10 + 1; x++) {
		printx(a * x * x + b * x + c, "O");
	}
}
