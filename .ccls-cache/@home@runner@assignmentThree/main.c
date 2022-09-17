/* Ryan Reddoch
   CS-1714-B1
   Exercise 4 */

// CONSTANTS //
#define ERROR_TRAP_BUFFER 1024
#define MAX_YEAR 2022
#define MIN_YEAR 1475
#define AUTHOR_CHAR_LIMIT 32
#define CITY_CHAR_LIMIT 64
#define MAX_COUNTER 2

// HEADERS //
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// buffer //
char buffer[ERROR_TRAP_BUFFER];

// global variables:

// Author Name //
char authorName[MAX_COUNTER][AUTHOR_CHAR_LIMIT];
//Publicatiuon Year
unsigned int pubYear[MAX_COUNTER];
// Publication City //
char pubCity[MAX_COUNTER][CITY_CHAR_LIMIT];


 
int main() {


  // main boolean variable for do while loop //
  bool isGood;
  // boolean to end main do while
 

  // Main do while
  int idx=0;
  for(;idx <= MAX_COUNTER;idx++){
 printf("%d \n",idx );

      do {

        isGood = false;
      //////////////// AURHOR LAST NAME ////////////
        
        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorName[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ///////////// PUBLICATION YEAR  //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear[idx]);
        getchar();

        if ((pubYear[idx] < MIN_YEAR) || (pubYear[idx] > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_CHAR_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);
    
    if (idx == MAX_COUNTER){

      break;
    }
      printf("Would you like to continue?\n Y/N\n");
      scanf("%s", buffer);
      getchar();
      char ans = toupper(buffer[0]);
      if (ans != 'Y'){
       break;
        }
        }
    
  int i;
        for (int i =0; i <= MAX_COUNTER; i++){
          printf("Author's Last Name: %s\n Publication Year %u\n Publication City %s\n",authorName[i],pubYear[i],pubCity[i]);
         
          }
 
  return 0;
}
