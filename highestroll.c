//Michael Long
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(0));
	int die1 = rand() % 6 + 1;
	int die2 = rand() % 6 + 1;
	int die3 = rand() % 6 + 1;
	int die4 = rand() % 6 + 1;
	int die5 = rand() % 6 + 1;
	char userName[100];
	int totalDie = 0;
	int dieMin;
	int dieMax;
	
	//srand(time(0));
	//int randomDie = rand() % 6 + 1;
	
	//printf("%d", randomDie);
	printf("Please enter your first and last name:\n"); // asking for user name
	scanf("%[^\n]%*c", userName);
	
	printf("Hello %s! You rolled: \n", userName); // opening acknowledgement
	
	printf("Die 1: %d\n", die1);
	printf("Die 2: %d\n", die2);
	printf("Die 3: %d\n", die3);
	printf("Die 4: %d\n", die4);
	printf("Die 5: %d\n", die5);
	
	totalDie = die1 + die2 + die3 + die4 + die5;
	
	printf("The total of your 5 die is: %d\n", totalDie);
	
	if ((die1 <= die2) & (die1 <= die3) & (die1 <= die4) & (die1 <= die5)) {	//die min if statements
		dieMin = die1;
	}
	else if((die2 <= die1) & (die2 <= die3) & (die2 <= die4) & (die2 <= die5)){
		dieMin = die2;
	}
	else if((die3 <= die1) & (die3 <= die2) & (die3 <= die4) & (die3 <= die5)){
			dieMin = die3;
	}
	else if((die4 <= die1) & (die4 <= die2) & (die4 <= die3) & (die4 <= die5)){
			dieMin = die4;
	}
	else if((die5 <= die1) & (die5 <= die2) & (die5 <= die3) & (die5 <= die4)){
			dieMin = die5;
	}
	else{
		dieMin = 1;
	}
	//printf("%d", dieMin); // test to print lowest number die
	
	if((die1 >= die2) & (die1 >= die3) & (die1 >= die4) & (die1 >= die5)){	// if's for max die number
		dieMax = die1;
	}
	else if((die2 >= die1) & (die2 >= die3) & (die2 >= die4) & (die2 >= die5)){
		dieMax = die2;
	}
	else if((die3 >= die1) & (die3 >= die2) & (die3 >= die4) & (die3 >= die5)){
			dieMax = die3;
	}
	else if((die4 >= die1) & (die4 >= die2) & (die4 >= die3) & (die4 >= die5)){
			dieMax = die4;
	}
	else if((die5 >= die1) & (die5 >= die2) & (die5 >= die3) & (die5 >= die4)){
			dieMax = die5;
	}
	else{
		dieMax = 6;
	}
	
	printf("The maximum die is: %d\n", dieMax);
	
	printf("The minimum die is: %d\n", dieMin);
	
	
	return 0;	
}