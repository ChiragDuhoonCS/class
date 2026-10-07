#include<stdio.h>

struct student {
    char name[50];
    int marks;


};

int main() {
    struct student s1;
    s1.marks = 10;

    printf("%d" , s1.marks);
    return 0;
}