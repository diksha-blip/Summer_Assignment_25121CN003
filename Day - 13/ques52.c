program to count even and odd elements in a array
#include<stdio.h>

int main()
{
    int arr[100] , n, even_count = 0, odd_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    
    printf("The number of even elements in the array is: %d\n",even_count);
    printf("The number of odd elements in the array is: %d\n",odd_count);
    
    return 0;
}
