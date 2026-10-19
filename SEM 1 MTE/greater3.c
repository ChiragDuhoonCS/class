#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = 4;

    if(a>b && a>c){
        printf("a is greatest no.");
    }

    else if (b > a && b > c) {
        printf("b is gretest no. ");
    }

    else 
    printf("c is gretest no. ");

    return 0;
}