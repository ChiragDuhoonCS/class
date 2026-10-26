#include<stdio.h>

int value(int a,int b) {
    return a+b;

}

int main() {
    int a,b;
    printf("Whats value of a: ");
    scanf("%d",&a);
    printf("\nWhats value of b: ");
    scanf("%d",&b);

    printf("\nSum: %d", value(a, b));
    return 0;
}