#include<stdio.h>

int main() {
    int arr[] ={34,654,35,87,345,45};
      int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    int small = arr[0];
    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("%d is largest \n",largest);


    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < small){
            small = arr[i];
        }
    }
    printf("%d is smallest",small);


    return 0;
}