//Michael Long
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
	int die1 = rand() % 6 + 1;
	int die2 = rand() % 6 + 1;
	int die3 = rand() % 6 + 1;
	int die4 = rand() % 6 + 1;
	int die5 = rand() % 6 + 1;
	char userAnswer[10];
	
	printf("Welcome to Yahtzee!!\n");    // Intro
	printf("You have 3 rolls to try and get 5 of a kind\n\n");
	
	for (int x = 0;x < 3; ++x) { // for loop for the running of the dice
		printf("Here we go - roll %d!\n", x + 1);
		printf("Die %d: %d\n", 1, die1);
      printf("Die %d: %d\n", 2, die2);
		printf("Die %d: %d\n", 3, die3);
		printf("Die %d: %d\n", 4, die4);
		printf("Die %d: %d\n", 5, die5);
      
      if( x < 2){
         if ((die1 != die2) || (die1 != die3) || (die1 != die4) || (die1 != die5)){ // beggining of if statement for a non yahtzee roll.
            printf("Please answer the following (y or n)\n");
               printf("Would you like to reroll die 1?:\n");
               scanf(" %[^\n]s", userAnswer);
               if (strcmp(userAnswer, "y") == 0){ // if to see if user wants to reroll the die.
                  die1 = rand() % 6 + 1;
               } // end of if reroll.
            
               printf("Would you like to reroll die 2?:\n");
               scanf(" %[^\n]s", userAnswer);
               if (strcmp(userAnswer, "y") == 0){ // if to see if user wants to reroll the die.
                  die2 = rand() % 6 + 1;
               } // end of if reroll.
            
               printf("Would you like to reroll die 3?:\n");
               scanf(" %[^\n]s", userAnswer);
               if (strcmp(userAnswer, "y") == 0){ // if to see if user wants to reroll the die.
                  die3 = rand() % 6 + 1;
               } // end of if reroll.
            
               printf("Would you like to reroll die 4?:\n");
               scanf(" %[^\n]s", userAnswer);
               if (strcmp(userAnswer, "y") == 0){ // if to see if user wants to reroll the die.
                  die4 = rand() % 6 + 1;
               } // end of if reroll.
            
               printf("Would you like to reroll die 5?:\n");
               scanf(" %[^\n]s", userAnswer);
               if (strcmp(userAnswer, "y") == 0){ // if to see if user wants to reroll the die.
                  die5 = rand() % 6 + 1;
               } // end of if reroll.x
            
         } // end of if for non yahtzee roll
      }//end of if for loop for rerolls
	} // end of for loop for rolling the dice
	
   if((die1 == die2) && (die1 == die3) && (die1 == die4) && (die1 == die5)){
      printf("*********\n");
      printf("Yahtzee\n");
      printf("*********\n");
   }
   else{
      printf("Sorry - Better luck next time!\n");
   }
	
	return 0;
}
