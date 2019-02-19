//
//  ItemToPurchase.h
//  
//
//  Created by Michael Long on 2/14/19.
//

#ifndef ItemToPurchase_h
#define ItemToPurchase_h



typedef struct ItemToPurchase_struct{
	char itemName[50];
	int itemPrice;
	int itemQuantity;
	
}ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase itemCost);

#endif /* ItemToPurchase_h */
