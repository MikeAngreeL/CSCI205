//Michael Long
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void GetNumOfNonWSCharacters(char *userString){// 'c'
   int count = 0;
   for(int x = 0; x < strlen(userString); x++){
      if((userString[x] != ' ') && (userString[x] != '\n') && (userString[x] != '\t')){
         count += 1;
      }//end of if statement for the function
   }// end of count for loop
   printf("Number of non-whitespace characters: %d\n\n", count);
}

void GetNumOfWords(char *userString){ // 'w'
   int count = 0;
   for(int x = 0; x < strlen(userString); x++){
      if((userString[x] == ' ') || (userString[x] == '\n') || (userString[x] == '\t')){
         count += 1;
      }// end of if
   }//end of for loop
   printf("Number of words: %d\n\n", count - 1);
}// end of words function

void FixCapitalization(char *userString){ // 'f'
   for(int x = 0; x < strlen(userString); x++){
      if(islower(userString[0])){
      }
   }// end of for loop
   printf("Edited text: %s\n\n", userString);
}// end of capitalization function

void ReplaceExclamation(char *userString){// 'r'
   for(int x = 0; x < strlen(userString); x++){
      if(userString[x] == '!'){
         userString[x] = '.';
      }//end of if statement
   }// end for loop
   printf("Edited text: %s\n\n", userString);
}//end of exclamation function

void ShortenSpace(char *userString){ // 's'
   for(int x = 0; x < strlen(userString); x++){
      if((userString[x] == ' ') && (userString[x + 1] == ' ')){
         for(int y = x + 1; y < strlen(userString); y++){
            userString[y] = userString[y + 1];
         }//end of inner for loop
      }//end of if
   }//end of for loop
   printf("Edited text: %s\n\n", userString);
}//end of shorten function

char PrintMenu(char *userString){
   char menuOption = ' ';
   
   while((menuOption != 'q') && (menuOption != 'c') && (menuOption != 'w') && (menuOption != 'f') && (menuOption != 'r')
         && (menuOption != 's')){ // while loop to have the user pick an option
      printf("MENU\n");
      printf("c - Number of non-whitespace characters\n");
      printf("w - Number of words\n");
      printf("f - Fix capitalization\n");
      printf("r - Replace all !'s\n");
      printf("s - Shorten spaces\n");
      printf("q - Quit\n\n");
      printf("Choose an option:\n");
      scanf(" %c", &menuOption);
      
      if(menuOption == 'c'){
         GetNumOfNonWSCharacters(userString);
         menuOption = ' ';
      }
      else if (menuOption == 'w'){
         GetNumOfWords(userString);
         menuOption = ' ';
      }
      
      else if(menuOption == 'f'){
         FixCapitalization(userString);
         menuOption = ' ';
      }
      else if (menuOption == 'r'){
         ReplaceExclamation(userString);
         menuOption = ' ';
      }
      else if (menuOption == 's'){
         ShortenSpace(userString);
         menuOption = ' ';
      }
   }//end of while loop
}// end of PrintMenu function

int main() {
   char userString[256];
   char menuChoice;
   
   printf("Enter a sample text:\n");
   scanf("%[^\n]s", userString);
   
   printf("\n");
   
   printf("You entered: %s\n\n", userString);
   
   while (menuChoice != 'q') {
      menuChoice = PrintMenu(userString);
   }//end of while loop
   
   
   
   return 0;
}
