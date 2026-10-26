#include <stdio.h>

void byValue(int x) {
    x = 100; //@ Changes only the copy
}

void byAddress(int *x) {
    *x = 100; //@ Changes the actual variable using its address
}

int main() {
    int a = 5;

    byValue(a);
    printf("After by Value: %d\n", a);   //@ Still 5

    byAddress(&a);
    printf("After by Address: %d\n", a); //@ Becomes 100

    return 0;
}