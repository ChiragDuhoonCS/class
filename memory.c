#include<stdio.h> 
#include<stdlib.h> 

int main() {
    int *p = malloc(sizeof(int));

    int *p = 10;

    printf("%d", sizeof(int));

    free(p);
    return 0;
}