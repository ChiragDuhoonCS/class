//!Develop a C program to perform matrix addition using a two-dimensional array.

#include<stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10]; //@ declaration of 2d array
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);


    //% FIRST MATRIX
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) //@ loop for rows
    {
        for (j = 0; j < cols; j++) //@ loop for columns
        {
            scanf("%d", &a[i][j]);//@ taking input from user
        }
    }

    //% SECOND MATRIX
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    //% SUM OF TWO MATRIX
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j]; //% SUM MATRIX ITS DIFF
        }
    }

    //% DISPLAY OF MATRIX
    printf("Sum of the two matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
  }