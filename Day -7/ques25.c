// program to find recursive factorial 

#include <stdio.h>

long long factorial(int n)
{
    if( n==0 || n == 1)
    return 1;
    else
      return n * factorial(n-1);
}
   int main()
{
    int n;

    printf("Enter a number:");
    scanf("%d" , &n);

    printf("The factorial of %d = %lld" , n , factorial(n));

    return 0;
}

























    printf("The number of duplicate elements in the array is: %d", count);
    return 0;
    
}
