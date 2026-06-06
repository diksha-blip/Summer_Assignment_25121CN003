//program to find x^n without using pow()

#include <stdio.h>
{
    int x , n;
    long long result = 1 ;

    printf("enter the base (x):");
    scanf("%d", &x);

    printf("enter the exponent (n):");
    scanf("%d", &n); 

    for(int i =1; i<= n; i++)
    {
        result *= x;
    }
    printf("%d^%d =%lld\n" , x , n, result);

    return 0 ;

}
