//
//  main.c
//  
//
//  Created by Michael Long on 2/14/19.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ItemToPurchase.h"

int main(void){
	ItemToPurchase* item1 = NULL;
	ItemToPurchase* item2 = NULL;
	int totalCost = 0;
	
	item1 = (ItemToPurchase*)malloc(sizeof(ItemToPurchase));
	item2 = (ItemToPurchase*)malloc(sizeof(ItemToPurchase));
	
	//MakeItemBlank(item1);
	//MakeItemBlank(item2);
	
	printf("Item 1\n");
	printf("Enter the item name:\n");
	scanf("%[^\n]s", item1->itemName);
	printf("Enter the item price:\n");
	scanf("%d", &item1->itemPrice);
	printf("Enter the item quantity:\n");
	scanf("%d", &item1->itemQuantity);
	
	//PrintItemCost(*item1);
	printf("\n");
	
	printf("Item 2\n");
	printf("Enter the item name:\n");
	scanf("\n%[^\n]s", item2->itemName);
	printf("Enter the item price:\n");
	scanf("%d", &item2->itemPrice);
	printf("Enter the item quantity:\n");
	scanf("%d", &item2->itemQuantity);
	
	//PrintItemCost(*item2);
	
	printf("TOTAL COST\n");
	PrintItemCost(*item1);
	PrintItemCost(*item2);
	totalCost = (item1->itemPrice * item1->itemQuantity) + (item2->itemPrice * item2->itemQuantity);
	printf("Total: $%d\n", totalCost);
	
	//MakeItemBlank(item1);
	//PrintItemCost(*item1);
	return 0;
}// end of program