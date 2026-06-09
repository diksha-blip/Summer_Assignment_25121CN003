//program to print number pyramid
#include<stdio.h>
int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for( int i = 1;i <= rows; i++)
    {
        //print increasing numbers
        for (int j = 1; j <= i; j++)
         {
            printf("%d ", j);
        }
        //print decreasing numbers
        for( int j = i -1; j >= 1; j--)
         {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0 ;
}


