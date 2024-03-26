#include <stdio.h>
#include "utils.h"

int menu(void) {
	printf("The Sene-Store");
	nl();
	printf("1- Inventory");
	nl();
	printf("2- Add item");
	nl();
	printf("3- Remove item");
	nl();
	printf("4- Stock item");
	nl();
	printf("5- POS");
	nl();
	printf("0- exit program");
	nl();
}

void runPos(const char filename[]) {
	int done = 0;
	int selection = 0;
	while (!done) {
		menu();
		selection = getIntMM(0,5,)
	}

}