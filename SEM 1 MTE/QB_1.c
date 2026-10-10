

#include<stdio.h>

void q1 () {

    //! Write a C program to find the largest among three numbers using decision-making statements.

    int a,b,c;
    printf("First Number:  ");
    scanf("%d" , &a);

    printf("\nSecond Number:  ");
    scanf("%d" , &b);

    printf("\nThird Number:  ");
    scanf("%d" , &c);

    printf("\n===========================\n");

    if( a >= b && a >= c) {
        printf("%d is largest number" , a);
    }

    else if( b >= a && b >= c) {
        printf("%d is largest number" , b);
    }

    else {
        printf("%d is largest number" , c);
    }
    
    printf("\n===========================\n");

}

void q2() {
  //!  Write a C program to determine whether a given year is a leap year or not.

  int year;
  printf("Year:  ");
    scanf("%d" , &year);

  int a;
  a= year/400 || year/4;


  if(a==0){
    printf("\n%d is leap year",year);
  }
  else {
    printf("\n%d isn't leap year",year);

  }

}

void q3() {
    //! Develop a program to check whether a given number is prime or not

    int n,a;
    printf("N:  ");
    scanf("%d" , &n);

    if(n < 1) {
      printf("please enter valid number");
    }

    for (int i = 2; i < n; i++)
    {
      a = n/i;
    }

    if(a == 1) {
      printf("NO its not prime number");
    }
    else{
      printf("%d is prime number")
    }

}




int main() {
    q2();
    return 0;
}