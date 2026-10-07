#include<stdio.h> 
#include<stdlib.h> 

int main() {
    int *p = 10;

    malloc(sizeof(p));
    printf("%d", sizeof(p));
    return 0;
}