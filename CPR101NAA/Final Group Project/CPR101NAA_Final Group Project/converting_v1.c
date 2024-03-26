// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS_
#define BUFFER_SIZE 80
#include "converting.h"

// V1
void converting(void) {
	printf("*** Start of Converting Strings to int Demo ***\n");
	char intString[BUFFER_SIZE];
	int intNumber;
	do {
		intNumber;
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';
		if (strcmp(intString, "q") != 0) {
			int Number = atoi(intString);
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);
	printf("*** End of Converting Strings to int Demo ***\n\n");
}