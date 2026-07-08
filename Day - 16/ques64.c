//program to remove duplicates from the array 

#include<stdio . h>

int main()
{
    int  arr[100], n , i , j , k;

    printf("Enter the number of elements ");
    scanf("%d", &n);

    printf("Enter the elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for  (i = 0; i < n; i++)
    {
        for (j = i+1 ; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    printf("The array after removing duplicates is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
