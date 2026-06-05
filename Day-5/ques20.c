#include <stdio.h>
int main()
{
    int num ,i , largestPrimeFactor=-1;

    printf("Enter a number:");
    scanf("%d", &num);

for(i=2; i<= num; i++)
{
    while(num%i== 0)
    {
        largestPrimeFactor= i;
        num/=i;
    }
}
printf("Largest prime Factor is= %d\n", largestPrimeFactor);
return 0;
} 

