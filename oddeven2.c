//
//  oddeven2.c
//  
//
//  Created by Michael Long on 2/12/19.
//

#include <stdio.h>
#include <stdlib.h>

int main(void){
   int* mainArray;
   int* oddArray;
   int* evenArray;
   int oddCount = 0;
   int evenCount = 0;
   int userInput;
   
   printf("Enter the size of an array:\n");
   scanf("%d", &userInput);
   
   mainArray = (int*)malloc(userInput * (sizeof(int)));
   
   printf("Enter the elements (integers) of the array:\n");
   for(int x = 0; x < userInput; x++){
      scanf("%d", (mainArray + x));
      
   }// end of array formation
   for (int x = 0; x < userInput; x++){
      if(*(mainArray + x) % 2 == 0){
         evenCount++;
      }//end of even if
      else{
         oddCount++;
      }//else to add to odd count
   }// end of counter for loop
   //printf("%d", evenCount); tests
   //printf("%d", oddCount); tests
   
   oddArray = (int*)malloc(oddCount * (sizeof(int)));
   evenArray = (int*)malloc(evenCount * (sizeof(int)));
   
   oddCount = 0;//resets counters to 0
   evenCount = 0;
   for(int x = 0; x < userInput; x++){
      if((*(mainArray + x) % 2) == 0){
         *(evenArray + evenCount) = *(mainArray + x);
         evenCount += 1;
      }//forms even array
      else{
         *(oddArray + oddCount) = *(mainArray + x);
         oddCount += 1;
      }// forms odd array
      
   }// end of for loop to fill the odd and even arrays
   
   printf("The elements of the odd array are:\n");
   for(int x = 0; x < oddCount; x++){
      printf("%d\n", *(oddArray + x));
   }//for loop to pring odd array
   
   printf("The elements of the even array are:\n");
   for(int x = 0; x < evenCount; x++){
      printf("%d\n", *(evenArray + x));
      
   }//end of loop to print even array
   
   free(mainArray);
   free(evenArray);
   free(oddArray);
   
   return 0; //end of program
}
