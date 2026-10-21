#include <stdio.h>

void byValue(int x) {
    x = 100; // Changes only the copy
}

void byAddress(int *x) {
    *x = 100; // Changes the actual variable using its address
}

