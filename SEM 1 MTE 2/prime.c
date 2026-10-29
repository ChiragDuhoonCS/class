#include <stdio.h>

int main()
{
    int n;
    int a = 1;
    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        a = n % i;
        if (a == 0)
        {
            break;
        }
    }
    if (a == 0)
    {
        printf("%d isnt prime number", n);
    }

    else
    {
        printf("%d is prime number", n);
    }
    return 0;
}