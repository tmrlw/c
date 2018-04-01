#include "stdio.h"
#include "ctype.h"

char* cap1str(char*);

int main(void) {
	char string[20];
	
	scanf("%s", string);

	printf("%s\n", cap1str(string));

	return 0;
}

char* cap1str(char* string) {
	if (islower(string[0]))
		string[0] = toupper(string[0]);
	
	return string;
}
