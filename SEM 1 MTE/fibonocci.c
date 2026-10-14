#include <stdio.h>

int q1() {

    //! The Fibonacci series is a sequence in which each number is the sum of the previous two numbers.
    int a = 0, b = 1, c, n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

int main() {
    q1();
    return 0;
}