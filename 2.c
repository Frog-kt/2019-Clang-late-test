#include <stdio.h>

typedef struct item
{
	int price;
} ITEM;

void set_data(item *pData);

int main(void)
{
	ITEM item;
	set_data(&item);

	printf("price: %d\n", item.price);

	return 0;
}

void set_data(item *pData)
{
	pData->price = 1000;
}