//program to pair with given sum in an array 

#include <stdio.h>

int main()
{
    int arr[100], n , i , j , found = 0;

    printf("Enter the  number of elememts :");
    scanf("%d", &n);

    printf("Enter the elements ; \n");
    for(i = 0; i<n ; i++)
    {
        scanf("%d ", &arr[i]);

    }

    printf("Enter the required sum :");
    scanf("%d" , &sum);

    for (i = 0; i<n ; i++)
    {
        for (j = i+1 ; j <n ; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("The  pair is : %d , %d\n" , arr[i] , arr[j]);
                found = 1; 
            }
        }
    }
      if (found == 0)
      {
        printf("No pair found with the given sum :\n ");

      }
    
      return 0 ;
}
