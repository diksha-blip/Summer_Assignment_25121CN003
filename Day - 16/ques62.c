//program to find maximum frequency element  in an array 


#include <stdio.h>

int main()
{
    int arr[100] , n , i , j ;
    int maxCount = 0, count = 0, maxElement;

    printf("Enter the number of elements :");
    scanf("%d" , &n);

    printf ("Enter the elements :\n");
    for (i = 0 ; i<n; i++)
    {
        scanf("%d" , &arr[i]);

    }

    for  ( i = 0; i< n i++)
{
    count = 1;

    for ( j = i+1; j<n; j++)
    {
        if (arr[i] == arr[j])
        {
            count++;
        }
    }
    if (count > maxCount)
    {
        maxCount = count;
        maxElement = arr[i];
    }
}
printf("The maximum frequency element is : %d\n", maxElement);
printf("The maximum frequency is : %d\n", maxCount);

return 0 ;
     
}
