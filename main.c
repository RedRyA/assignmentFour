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

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



// buffer // 
char buffer[ERROR_TRAP_BUFFER];
// global variables //
char authorName1[AUTHOR_CHAR_LIMIT], authorName2[AUTHOR_CHAR_LIMIT],authorName3[AUTHOR_CHAR_LIMIT];

char pubCity1[CITY_CHAR_LIMIT], pubCity2[CITY_CHAR_LIMIT], pubCity3[CITY_CHAR_LIMIT];

unsigned int pubYear1, pubYear2, pubYear3;

int  main() {

// main boolean variable for do while loop //
int counter=0; 
bool isGood;


do {

        switch(counter){

                case 0:
                /////////// AUTHOR NAME /////////////////
                do {

                isGood=false;

                printf("What is the author's last name? \n");
                        scanf(" %[^\n]s",buffer );
                        
                        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT)
                        {
                        printf("Author name is limited to 32 characters, try again\n");
                                isGood= true;
                        }

                } while (isGood);

                strcpy(authorName1,buffer);
                memset(buffer, '\0', ERROR_TRAP_BUFFER);

                ///////////// PUBLICATION YEAR //////////////////////
        do {
                        isGood=false;

                        printf("What is the publication year?\n");
                        scanf("%u", &pubYear1);
                

                        if ((pubYear1 < MIN_YEAR) || (pubYear1  > MAX_YEAR))
                        {
                                printf("Publication year must be between 1475 and 2022\n");
                                isGood=true;
                                
                        }

        }while(isGood);

                /////////// PUBLICATION CITY //////////////////////
        do{
                        isGood=false;

                        printf("What is the publication city?\n");
                        scanf(" %[^\n]s" , buffer);

                        if (strlen(buffer) >= CITY_CHAR_LIMIT) {
                                printf("City name must be less than 64 characters.\n");
                                isGood=true;

                        }   

        }while(isGood);

                strcpy(pubCity1,buffer);
                memset(buffer, '\0', ERROR_TRAP_BUFFER);
        break; 

///////////////////////////////////////////////
                case 1:
     /////////// AUTHOR NAME /////////////////
        do {

                isGood=false;

                printf("What is the author's last name? \n");
                        scanf(" %[^\n]s",buffer );
                        
                        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT)
                        {
                        printf("Author name is limited to 32 characters, try again\n");
                                isGood= true;
                        }

        } while (isGood);

                strcpy(authorName2,buffer);
                memset(buffer, '\0', ERROR_TRAP_BUFFER);

                ///////////// PUBLICATION YEAR //////////////////////
        do {
                        isGood=false;

                        printf("What is the publication year?\n");
                        scanf("%u", &pubYear2);
                

                        if ((pubYear2 < MIN_YEAR) || (pubYear2  > MAX_YEAR))
                        {
                                printf("Publication year must be between 1475 and 2022\n");
                                isGood=true;
                                
                        }

        }while(isGood);

                /////////// PUBLICATION CITY //////////////////////
        do{
                        isGood=false;

                        printf("What is the publication city?\n");
                        scanf(" %[^\n]s" , buffer);

                        if (strlen(buffer) >= CITY_CHAR_LIMIT) {
                                printf("City name must be less than 64 characters.\n");
                                isGood=true;

                        }   

        }while(isGood);

                strcpy(pubCity2,buffer);
                memset(buffer, '\0', ERROR_TRAP_BUFFER);
                break;
///////////////////////////////////////////////////////////
                
                case 2:

     /////////// AUTHOR NAME /////////////////
        do {

                isGood=false;

                printf("What is the author's last name? \n");
                        scanf(" %[^\n]s",buffer );
                        
                        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT)
                        {
                        printf("Author name is limited to 32 characters, try again\n");
                                isGood= true;
                        }

        } while (isGood);

                strcpy(authorName3,buffer);
                memset(buffer, '\0', ERROR_TRAP_BUFFER);

                ///////////// PUBLICATION YEAR //////////////////////
        do {
                        isGood=false;

                        printf("What is the publication year?\n");
                        scanf("%u", &pubYear3);
                        
                

                        if ((pubYear3 < MIN_YEAR) || (pubYear3  > MAX_YEAR))
                        {
                                printf("Publication year must be between 1475 and 2022\n");
                                isGood=true;
                                
                        }

        }while(isGood);

                /////////// PUBLICATION CITY //////////////////////
        do{
                        isGood=false;

                        printf("What is the publication city?\n");
                        scanf(" %[^\n]s" , buffer);
                        

                        if (strlen(buffer) >= CITY_CHAR_LIMIT) {
                                printf("City name must be less than 64 characters.\n");
                                isGood=true;

                        }   

        }while(isGood);

                strcpy(pubCity3,buffer);
                memset(buffer, '\0', ERROR_TRAP_BUFFER);
                break; 

                default:

                printf("Counter max overload!");



        }

        /////////////////// END SWITCH /////////////////////////
counter ++;
if (counter < MAX_COUNTER){
        printf("\n The counter is: %d",counter);
        printf("Would you like to comtinue?\n Y/N");
        scanf(" %[^/n]s",buffer);

       
        
       if (toupper(buffer[0])=='N'){
        counter = MAX_COUNTER;
       }
}



}while(counter < MAX_COUNTER);

return 0;

}










