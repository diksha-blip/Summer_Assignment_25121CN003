//program to print inverted star pyramid
#include<stdio.h>
int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--)
     {
        //print spaces
        for (int j = 1; j <= rows - i; j++)
         {
            printf(" ");
        }
        //print stars
        for (int j = 1; j <= 2 * i - 1; j++)
         {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}
