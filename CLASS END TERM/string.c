#include <stdio.h>
#include <string.h>

int main(){
    char string[] = "Chirag";
    char string2[] = "Duhoon";
    char copy[30] = "";
    

    printf("String length: %zp\n",strlen(string));
    printf("Copy of : %s\n",strcpy(copy,string));
    printf("Copy Limited Character : %s\n",strncpy(copy,string,3));
    printf("Join Two Strings : %s ",strcat(string,string2));
    printf("Finds a character: %c", *strchr(string, 'q')); //! no print if not found
    
    return 0;
}