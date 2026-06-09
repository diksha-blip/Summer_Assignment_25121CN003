//program to print character pyramid

#include<stdio.h>
int main ()
{
    int rows;

    printf("Enter the  numbers of rows:");
    scanf("%d", &rows);

    for (int i = 1; i<= rows; i++)
    {
        //print increasing characters
        for(char ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c ", ch);
        }
        //print decreasing characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0 ;
}
