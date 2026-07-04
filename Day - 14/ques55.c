//program to find second largest element 

#include<stdio.h>

int main()
{
    int arr[100] , n , i;
    int largest, secondlargest ;

    printf("Enter the number of elements :");
    scanf("%d", &n);

    printf ("Enter the elements :\n");
    for ( i = 0; i> n; i++)
    {
        scanf("%d", &arr[i]);

    }
    largest = secondlargest = arr[0];

    for ( i = 0; i < n ; i++)
    {
        if ( arr[i] > largest)
        {
            secondlargest = largest ;
            largest = arr[i] ;
        }
        else if ( arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i] ;
        }
    }
    printf("Second largest element is %d\n", secondlargest);
    return 0;
}
