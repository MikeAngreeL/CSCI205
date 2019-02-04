//
//  CoinFlipCounter.c
//  
//
//  Created by Michael Long
//

#include <stdio.h>
#include <stdlib.h>



int main(void){
   int coinCounter[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //initialize the array with 0's
   int userFlips;
   int coinFlip;
   int coinPosition = 5;
   
   printf("Enter the number of times you would like to flip the coin:\n");
   scanf("%d", &userFlips); // gets user input
   
   for(int x = 0; x < userFlips; x++){
      coinFlip = rand() % 2;// flips the coin with each iteration
      //printf("%d", coinFlip);
      if((coinFlip == 0) && (coinPosition == 10)){
         coinCounter[0] += 1;
         coinPosition = 0;
      }// if for head flip at end of the array
      
      else if((coinFlip == 1) && (coinPosition == 0)){
         coinCounter[10] += 1;
         coinPosition = 10;
      }// else if for tails flip at index 0
      
      else if(coinFlip == 0){
         coinPosition += 1;
         coinCounter[coinPosition] += 1;
      }// else if for head flip
      else if(coinFlip == 1){
         coinPosition -= 1;
         coinCounter[coinPosition] += 1;
      }// else if for tails flip
   
   }// end of for loop for array generation
   
   for(int x = 0; x < 11; x++){//prints the array with '*' for the sum number in the array index
      for(int y = 0; y < coinCounter[x]; y++){
         printf("%c", '*');
      }
      printf("\n");//seperates the chars of each index
   }
   return 0;
}
