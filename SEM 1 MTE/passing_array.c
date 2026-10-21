#include<stdio.h>


int sum(int arr[]){
   
    int sum2 = 0;
    for (int i = 0; i < 5; i++)
    {
        sum2 += arr[i];
    }

    return sum2;

}

int main() {
    int arr[] = {23,45,34,56,56};

    int sum2 = sum(arr);

    printf("%d is sum",sum2);
    return 0;
}