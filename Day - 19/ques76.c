//program to find diagonal sum of a matrix

#include <stdio.h>

int main()
{
    int a[10][10];
    int  n , i , j ,sum = 0;

    printf("Enter the order of the matrix :");
    scanf("%d" , &n);

    printf("Enter the elements of matrix :\n");
    for (i = 0; i<n ; i++)
    {
        for (j = 0; j<n ; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }

    //calculate diagonal sum

    for (i = 0; i<n ; i++)
    {
        sum += a[i][i];
    }
    printf("Sum of diagonal elements : %d\n" , sum);

    return 0;
}
