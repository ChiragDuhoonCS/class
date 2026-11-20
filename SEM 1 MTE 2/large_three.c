#include <stdio.h>

int main() {
    int a,b,c;
    printf("Whats A: ");
    scanf("%d",&a);

    printf("Whats B: ");
    scanf("%d",&b);

    printf("Whats C: ");
    scanf("%d",&c);

    if(a >= b && a >= c){
        printf("A is greatest");
    }

    
    else if(b >= a && b >= c){
        printf("B is greatest");
    }

    else{
        printf("C is gretest");

    }
    return 0;

}
