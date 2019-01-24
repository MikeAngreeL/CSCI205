//Michael Long
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
	int die1;
	int die2;
	int die3; 
	int die4;
	int die5;
	char userAnswer[1];
	
	printf("Welcome to Yahtzee!\n");    // Intro
	printf("You have 3 rolls to try and get 5 of a kind\n\n");
	
	for (int x = 0;x < 3;x++) { // for loop for the running of the dice
		printf("Here we go - roll %d!\n", x + 1);
		die1 = rand() % 6 + 1;
		printf("Die %d: %d\n", 1, die1);
		die2 = rand() % 6 + 1;
		printf("Die %d: %d\n", 2, die2);
		die3 = rand() % 6 + 1;
		printf("Die %d: %d\n", 3, die3);
		die4 = rand() % 6 + 1;
		printf("Die %d: %d\n", 4, die4);
		die5 = rand() % 6 + 1;
		printf("Die %d: %d\n", 5, die5);
		
		
            
			
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
