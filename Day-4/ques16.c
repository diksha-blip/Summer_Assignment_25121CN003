#include<stdio.h>
#include<math .h>

int main ()
{
    int start, end, num ,originalNu , remainder , n, result ;

printf("Enter the starting number:");
scanf("%d" , &start);

printf("Enter the ending number:");
scanf("%d",&end);

printf("Armstrong between %d and %d are:\n", start , end);

    for(num= start; num <=end; num++)
    {
        originalNum = num;
        n=0;
        result = 0;

        //count digits
        while(originalNum != 0)
        {
            originalNum/= 10;
            n ++;
        }
        originalNum = num;

        //calculate sum of powers of digits
        while(originalNum!=0)
        {
            remainder = originalNum % 10 ;
            result +=pow(remainder, n );
            originalNum/= 10;
        }
        if(result==num)
        printf("%d", num);

    }
    return 0;
}