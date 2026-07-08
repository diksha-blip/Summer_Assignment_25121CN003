//program to find missing number in an array 

#include <stdio.h>

int main()
{
    int arr[100] , n , i;
    int  sum = 0, total , missing;

    printf("Enter the value of n :");
    scanf("%d" , &n);

    printf("Enter  %d elements :\n", n-1);
    for(i = 0; i < n-1; i++)
    {
        scanf("%d" , &arr[i]);
        sum += arr[i];
    }

    total = n*(n+1)/2;
    missing = total - sum;
    printf("The missing number is : %d\n", missing);

    return 0 ;
}
