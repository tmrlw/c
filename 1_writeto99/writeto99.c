#include "stdio.h"

int main(void) {
	FILE* archivo = fopen("ints0to99.txt", "w");
		
	for (int i = 0; i < 100; i++) {
		fprintf(archivo, "%d\n", i);
	}
	
	fclose(archivo);

	return 0;
}

