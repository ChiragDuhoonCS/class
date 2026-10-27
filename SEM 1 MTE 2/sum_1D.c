#include<stdio.h>

int main() {
    int arr[] ={34,654,35,87,345,45};
    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d",sum);

    return 0;


}