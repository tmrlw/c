#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// PRINT X VECES
void printx(int times, char* string) {
	for (int i = 0; i < times; i++) {
		printf("%s", string);
	}
	printf("\n");
}

// PRINTX CON INPUT
void printxin(int limit) {
	char string[limit];
	int* times = malloc(sizeof(int));
	
	printf("string: ");
	gets(string);
	printf("times: ");
	scanf("%i", times);

	printx(*times, string);
}
