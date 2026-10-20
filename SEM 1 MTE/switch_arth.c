#include<stdio.h>

int main() {
    char operator;
    int num1,num2;
    double result;

    printf("Enter Number 1: ");
    scanf("%d",&num1);

    printf("Enter Operator: ");
    scanf(" %c",&operator);

    printf("Enter Number 2: ");
    scanf("%d",&num2);

    switch (operator)
    {
    case '+':
        result = num1+num2;
        printf("%d + %d = %.2lf",num1,num2, result);
        break;

    case '-':
        result = num1-num2;
        printf("%d - %d = %.2lf",num1,num2, result);
        break;
        
    case '*':
        result = num1*num2;
        printf("%d * %d = %.2lf",num1,num2, result);
        break;


    case '/':
        result = num1/num2;
        printf("%d / %d = %.2lf",num1,num2, result);
        break;
    
    default:
    printf("Inalid! Operator");
        break;
    }

    return 0;
}