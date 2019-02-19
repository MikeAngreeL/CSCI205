//
//  ItemToPurchase.c
//  
//
//  Created by Michael Long on 2/14/19.
//

#include "ItemToPurchase.h"
#include <string.h>
#include <stdio.h>

void MakeItemBlank(ItemToPurchase* item){
	strcpy(item->itemName, "none");
	item->itemPrice = 0;
	item->itemQuantity = 0;
	
}// end of makeitemblank function

void PrintItemCost(ItemToPurchase item){
	int total = item.itemPrice * item.itemQuantity;
	printf("%s %d @ $%d = $%d\n", item.itemName, item.itemQuantity, item.itemPrice, total);
	
}// end of print item

