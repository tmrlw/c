#include "stdio.h"

int main(void) {

	// DECLARAR VECTOR E ÍNDICES
	int nums[100];
	int inindex = 0;
	int outindex = 0;

	// LEER ARCHIVO DE ENTRADA
	FILE* inFile = fopen("in.txt", "r");
	while (!feof(inFile)) {
		fscanf(inFile, "%i", &nums[inindex]);
		inindex++;
	}
	fclose(inFile);

	// MULTIPLICAR VECTOR POR 2
	for (int i = 0; i < inindex; i++) {
		nums[i] *= 2;
	}

	// ESCRIBIR ARCHIVO DE SALIDA
	FILE* outFile = fopen("out.txt", "w");
	while (outindex != inindex - 1) {
		fprintf(outFile, "%i\n", nums[outindex]);
		outindex++;
	}
	fclose(outFile);

	return 0;
}
