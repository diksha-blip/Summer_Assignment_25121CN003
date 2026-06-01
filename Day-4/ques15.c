#include<stdio.h>
#include<math.h>

int main ()
{
    int num , originalNum , remainder, n=0;
    int result = 0;

    printf("Enter an integer:");
    scanf("%d",& num);

    originalNum = num ;

    // count number of a  digits 
    while(originalNum!=0)
    {
        originalNum /=10;
        n++;
    }
    originalNum = num;

    //calculate the summ of digits raised to the power n
    while(originalNum!=0)
    {
        remainder = originalNum % 10 ;
        result += pow( remainder, n);
        originalNum/= 10;
    }

    if ( result == num)
    printf ("%d is an Armstrong number:",num);
else
    printf("%d is not an Armstrong number:", num);

    return 0 ;

}
