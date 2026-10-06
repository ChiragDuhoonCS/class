#include<stdio.h>

int main() {
    int arr[5];


    printf("Enter your array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
       printf("\n");
    }

    printf("Here is your array\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d , ",arr[i]);
    }
    
  return 0;
    
}