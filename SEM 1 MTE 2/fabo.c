#include<stdio.h>

int main() {
    int n,a = 0,b=1,next = 0,count = 0;
    printf("whats n: ");
    scanf("%d",&n);

    while (count < n)
    {
        printf("%d , ",a);
        next = a+b;
        a = b;
        b = next;
        count++;
    }
    printf("\n");
    return 0;
    
}