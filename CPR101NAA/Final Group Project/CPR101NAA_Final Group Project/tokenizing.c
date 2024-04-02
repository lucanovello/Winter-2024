// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V1
void tokenizing(void) {
	printf("*** Start of Tokenizing words Demo ***\n");
	char words[BUFFER_SIZE];
	char* nextword = NULL;
	int wordsCounter;
	do {
		printf("Type a few words separated by space (q - to quit): \n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) {
			nextword = strtok(words, " ");
			wordsCounter = 1;
			while (nextword) {
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextword);
				nextword = strtok(NULL, " ");
			}
		}
	} while (strcmp(words, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");
}
