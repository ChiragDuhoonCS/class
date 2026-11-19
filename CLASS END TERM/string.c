#include <stdio.h>
#include <string.h>

int main(){
    char string[] = "Chirag";
    char string2[] = "Duhoon";
    char copy[] = "";
    

    printf("String length: %zp\n",strlen(string));
    printf("Copy of : %s",strcpy(copy,string));
    return 0;
}