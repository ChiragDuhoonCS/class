

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
      a = n%i;
      if(a == 0) {
      break;
    }
    }

    if(a == 0) {
      printf("%d is not prime number",n);
    }
    else{
      printf("%d is prime number",n);
    }

}

void q4() {
  //!  Develop a C program to calculate the factorial of a number using a for loop.
  int n,a = 1;

  printf("Whats n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    a *= i;
  }
  
  printf("%d",a);
}

void q5() {
  //! Write a C program to demonstrate nested loops by printing a suitable pattern.

  int n = 5;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
}

void q6() {
  //! Develop a C program to find the sum of elements in a one-dimensional array.

  int arr[5] = {2,4,5,67,55};
  int sum;

  for (int i = 0; i < 5; i++)
  {
    sum += arr[i];
  }
  printf("%d", sum);
  
}

void q7() {
  //! Write a program to find the largest and smallest elements in an array.

    int arr[5] = {2, 4, 5, 67, 55};
    
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
}



  int factorial(int n){
    //! factorial by recurance

    if (n == 0 || n == 1){
      return 1;
    }
    else {
      n*factorial(n-1);
     return n*factorial(n-1); ;

    }
  }

  void q9() {
    //! ternary o[erator]
    int a,b;
    
    printf("Whats a: ");
    scanf("%d",&a);
    printf("\nWhats b: ");
    scanf("%d",&b);

    a > b ? printf("\nyup a is greater than b") : printf("\nNope a is not greater than b");

  }

  void q10() {

    //! PRE/POST INCREMENT ⭐

    int a = 5;

    printf("%d\n",a++);
    printf("%d\n",a);
    printf("%d",++a);

    int b = a++;
    printf("%d %d", a, b); //! Important 


  }

  void q11() {
    //! Switch statement

    int t;
    printf("Whats t: ");
    scanf("%d",&t);

    switch (t)
    {
    case 1:
      printf("You typed %d",t);
      break;

    case 2:
      printf("You typed %d",t);
      break;
    

    case 3:
      printf("You typed %d",t);
      break;
    

    case 4:
      printf("You typed %d",t);
      break;
    
    
    default:
      printf("You typed nothing");

      break;
    }

  }

  int q12() {
    //! Array input and display

    int q;
    printf("Whats q: ");
    scanf("%d",&q);

    int arr[q];

    printf("Enter array values:\n");
    for (int i = 0; i < q; i++)
    {
      scanf("%d",&arr[i]);
      printf("\n");
    }

    printf("Here is your array: ");
    for (int i = 0; i < q; i++)
    {
      printf("%d ,",arr[i]);
    }
    
    
    
  }


/*/int main() {
  int n;
  printf("Whats n: ");
  scanf("%d",&n);

  printf("%d", factorial(n));
}*/

int main() {
    q12();
    return 0;
}