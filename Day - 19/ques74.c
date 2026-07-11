//program to substract matrices 

#include <stdio.h>

int mainn ()
{
    int a[10][10] , b[10][10], c [10][10];
    int  rows, cols ,i , j;

    printf ("Enter the number of rows and columns :");
    scanf("%d %d" , &rows , &cols);

    printf("Enter the elements of first matrix :\n");
    for (i = 0; i<rows ; i++)
    {
        for (j = 0; j<cols ; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
      printf("Enter the elements of second matrix:\n");
    for (i = 0; i<rows ; i++)
    {
        for (j = 0; j<cols ; j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }

    //substract matrices
    for (i = 0; i<rows ; i++)
    {
        for (j = 0; j<cols ; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Resultant matrix :\n");
    for (i = 0; i<rows ; i++)
    {
        for (j = 0; j<cols ; j++)
        {
            printf("%d" , c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
