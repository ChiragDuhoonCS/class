#include <stdio.h>

int main() {
    int n, a =1;

    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        a *= i;
    }
    printf("%d",a);
    return 0;
    
}