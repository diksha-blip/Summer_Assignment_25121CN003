#include<stdio.h>
int main ()
{
    int n, original, reverse=0, digit;

    printf("Enter a number:");
    scanf("%d",&n);

    original =n;

    while (n!=0)
    {
        digit= n%10;  //extract last digit
        reverse = reverse * 10 +digit;   //build reversed number
        n=n/10;     // remove last digit
    }

    if( original==reverse)
    printf("%d is a Palindrome Number", original);
else
printf("%d is not a Palindrome Number", original);

return 0;

}
