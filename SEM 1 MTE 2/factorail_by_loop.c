#include<stdio.h>

int main() {
    int n;
    int a = 1;
    printf("Whats N: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        a *= i; 
    }

    printf("%d",a);
    
}