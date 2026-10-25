#include<stdio.h>

int main() {
    int arr[] = {2,4,5,7,8};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum is %d",sum);
    return 0;
    
}