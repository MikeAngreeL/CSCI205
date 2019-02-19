//
//  largest2.c
//
//
//  Created by Michael Long on 2/12/19.
//

#include <stdio.h>
#include <stdlib.h>

int main(void){
   int* arrayPtr = NULL;
   int userInput;
   int maxVal = 0;
   
   printf("Find the largest element using Dynamic Memory Allocation:\n");
   
   printf("Input total number of elements (1 to 100):\n");
   scanf("%d", &userInput);
   
   arrayPtr = (int*)malloc(userInput * sizeof(int));
   
   for(int x = 0; x < userInput; x++){
      printf("Value:\n");
      scanf("%d", (arrayPtr + x));
      
   }// end of generating array for loop
   
   printf("You entered:");
   for(int x = 0; x < userInput; x++){
      printf(" %d", *(arrayPtr + x));
      
   }// end of print for loop
   printf("\n");
   
   for(int x = 0; x < userInput; x++){
      if(*(arrayPtr + x) > maxVal){
         maxVal = *(arrayPtr + x);
         
      }//end of iff
      
   }//end of finding the largest element
   printf("The Largest element is: %d\n", maxVal);
   
   free(arrayPtr);
   
   
   return 0;// end of program
}
