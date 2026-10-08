#include<stdio.h>


int afnx(int n) {
    if(n == 0) return 1;

    return n * afnx(n - 1);
}

int main() {
    int n;
    printf("Whats n: ");
    scanf("%d" , &n);

    int result = afnx(n);
    printf("Here is your ans: %d", result);
    return 0;
}