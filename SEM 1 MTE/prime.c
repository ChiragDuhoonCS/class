#include<stdio.h>

int main () {
    int a,n;
    printf("Enter Prime number: ");
    scanf("%d",&n);

    for (int i = 2; i < n; i++)
    {
        a = n%i;
        if(a == 0) {
            break;
        }
    }

    if(a==0) {
        printf("%d is not a prime number", n);
    }

    else 
    printf("%d is prime number",n);

    return 0;
    
}