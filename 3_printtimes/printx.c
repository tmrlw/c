#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define LIMIT 30

// PROTOTIPOS
void printx(int, char*);
void printxin(void);

// MAIN
int main(void) {
	printxin();

	return 0;
}

// PRINTX CON INPUT
void printxin(void) {
	char* string = malloc(LIMIT * sizeof(char));
	int* times = malloc(sizeof(int));
	
	printf("string: ");
	gets(string);
	printf("times: ");
	scanf("%i", times);

	printx(*times, string);
}

// PRINT X VECES
void printx(int times, char* string) {
	for (int i = 0; i < times; i++) {
		printf("%s", string);
	}
	printf("\n");
}
