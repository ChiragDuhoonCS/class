#include<stdio.h> //@ this is header file where #include is preheader 
//!  stdio means standard input/output it include defination and working of input and output function   because of this we able to use printf an scanf in our program


//@ main   our function start from int main always
//@ ()  in this we use argument ig
int main() { //! int means it going to return some value where void means it will return nothing

    int a; //@ declaration
    a = 5; //@ initialisation

    printf("%d", a); //! printf to display  %d is placeholder for int datatype
    //@ %f for decimals %c for char %s for string
    return 0;
}