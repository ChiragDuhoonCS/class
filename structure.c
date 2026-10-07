#include<stdio.h>

struct student { //@ we can add different type of data in one structure   char and int here
    char name[50]; 
    int marks;

};

int main() {
    struct student s1; //@ here we can give another name   first we call it then nickname s1 here
    s1.marks = 10; //@ we can acess it by using nickname.things in struct 

    printf("%d" , s1.marks);
    return 0;
}