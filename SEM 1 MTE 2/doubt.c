//! POINTERS

#include <stdio.h>

int basic()
{
    int x = 10;
    int *p = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", p);
    printf("%d\n", *p);

    *p = 50;

    printf("%d\n", x);

    return 0;
}

#include <stdio.h>

int r()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
        printf("*(a+%d) = %d\n", i, *(a+i));
        printf("p[%d] = %d\n", i, p[i]);
        printf("*(p+%d) = %d\n", i, *(p+i));
    }

    return 0;
}

#include <stdio.h>

i

int main() {
    q();
    return 0;
}