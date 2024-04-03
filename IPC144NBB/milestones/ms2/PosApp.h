#ifndef SENECA_POSAPP_H
#define SENECA_POSAPP_H
#include "POS.h"

void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);

int loadItems(const char filename[]);
void saveItems(const char filename[]);

double cost(const struct Item* item);
void listItems(void);

struct Item
{
	char sku[MAX_SKU_LEN];
	char name[MAX_NAME_LEN];
	double price;
	int taxed;
	int quantity;	
};

struct Item items[MAX_NO_ITEMS];
int noOfItems;

#endif // !SENECA_POSAPP_H

