/* Ryan Reddoch
   CS-1714-B1
   Exercise 3 */

// CONSTANTS //
#define ERROR_TRAP_BUFFER 1024
#define MAX_YEAR 2022
#define MIN_YEAR 1475
#define AUTHOR_CHAR_LIMIT 32
#define CITY_CHAR_LIMIT 64
#define MAX_COUNTER 3

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
char authorName1[AUTHOR_CHAR_LIMIT], authorName2[AUTHOR_CHAR_LIMIT], authorName3[AUTHOR_CHAR_LIMIT];
//Publicatiuon Year
unsigned int pubYear1, pubYear2, pubYear3;

// global variables //
char pubCity1[CITY_CHAR_LIMIT], pubCity2[CITY_CHAR_LIMIT],
    pubCity3[CITY_CHAR_LIMIT];


 
int main() {

  // main boolean variable for do while loop //
  int counter = 0;
  bool isGood;
    bool goNoGo;

  do {

    switch (counter) {

    case 0:
      /////////// AUTHOR NAME /////////////////
      do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorName1, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ///////////// PUBLICATION YEAR //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear1);
        getchar();

        if ((pubYear1 < MIN_YEAR) || (pubYear1 > MAX_YEAR)) {
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

      strcpy(pubCity1, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);
      break;

      ///////////////////////////////////////////////////////////

    case 1:
      /////////// AUTHOR NAME /////////////////
      do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorName2, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ///////////// PUBLICATION YEAR //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear2);
        getchar();

        if ((pubYear2 < MIN_YEAR) || (pubYear2 > MAX_YEAR)) {
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

      strcpy(pubCity2, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);
      break;
      //////////////////////////////////////////////////////////////////
    case 2:

      /////////// AUTHOR NAME /////////////////
      do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorName3, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ///////////// PUBLICATION YEAR //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear3);
      getchar();
        if ((pubYear3 < MIN_YEAR) || (pubYear3 > MAX_YEAR)) {
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

      strcpy(pubCity3, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);
      break;

    default:

      printf("Counter max overload!");
    }

    /////////////////// END SWITCH /////////////////////////

    goNoGo=true;
       counter++;
    if (counter < MAX_COUNTER) {
      
      printf("Would you like to comtinue?\n Y/N\n");
      scanf("%s", buffer);
      getchar();
      char ans = toupper(buffer[0]);
      if (ans != 'Y'){
        goNoGo=false;
        
        for (int i=0; i<counter; i++){
          
          switch(i){
            
            case 0:
  printf("Book 1:\n Author Name: %s\n Publication Year: %u \n Publication City: %s\n",authorName1, pubYear1, pubCity1);
              break;
            
               case 1:
  printf("\n Book 2:\n Author Name: %s\n Publication Year: %u \n Publication City: %s",authorName2, pubYear2, pubCity2);
              break;
            
               default:
         printf("No more!");
          }
        }
        }
    
     
  
      
    }

  } while ((counter < MAX_COUNTER) && (goNoGo==true));

    if (counter == MAX_COUNTER){
      printf("Book 1:\n Author Name:%s\n Publiucation Year %u\n Publication City %s \n",authorName1,pubYear1,pubCity1);
      
            printf(" \nBook 2\n Author Name:%s\n Publiucation Year %u\n Publication City %s \n",authorName2,pubYear2,pubCity2);

           printf("\nBook 3:\n Author Name:%s\n Publiucation Year %u\n Publication City %s \n",authorName3,pubYear3,pubCity3);
    }

  
      

  return 0;
}
