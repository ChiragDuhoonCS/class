#include<stdio.h>

int main() {
    int arr[] = {43,56,34,54,23};

    int *p = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d , ", *(p+i));
    }
    printf("\n %d", *(p+1));
    return 0;
}