#include<stdio.h>

void fnx(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d , ",arr[i]);
    }
    
}

int main() {
    int arr[] = {23,65,87,45,34,56};
    fnx(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}