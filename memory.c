#include<stdio.h> 
#include<stdlib.h> 

int main() {
    int *p = malloc(sizeof(int)); //@ see here this is how we going to allocate it malloc first to create memory in ram it will resreved 4 byte coz we use int

    *p = 10; //@ initialisation in space we create before

    printf("%d", sizeof(int));

    free(p); //@ after we use malloc free up space
    return 0;
}