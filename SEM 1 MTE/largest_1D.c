#include<stdio.h>

int main() {
   
    int arr[] = {23,66,45,87,9};
    int largest = arr[0];
    int smallest = arr[0];

    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

            
       else if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("%d is largest\n",largest);
    printf("%d is smallest",smallest);

    return 0;
    

}
