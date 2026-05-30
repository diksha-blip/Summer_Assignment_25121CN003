#include<stdio.h>
int main()
{
    int n,reverse =0, digit;

    printf("Enter a number:");
    scanf("%d",&n);

while(n!=0)
{
    digit = n%10;  //extract last digit
    reverse = reverse *10 + digit;
    n = n /10;     //remove last digit
}

printf ("Reversed number =&d", reverse);

return 0;
}
