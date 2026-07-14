//program to merge two sorted array 

#include<stdio.h>

int main ()
{
    int A[100], B[100], C[100];
    int n , m , i , j ,k;

    printf("Enter size of first array :");
    scanf("%d" , &n);

    printf("Enter the elements of first sorted array :\n");
    for (i = 0; i<n ; i++)
      scanf("%d" , &A[i]);

      printf("Enter the size of second array :");
      scanf("%d " , &m);

      printf("Enter the elements of second array :");
        for (i = 0; i<m ; i++)
         scanf("%d" , &B[i]);

         i =  j = k = 0;

         while(i<n && j<m)
         {
            if (A[i] <= B[j])
               c[k++] = A[i++];
            else
              C[k++] = B[j++];
         }

         while(i<n) 
         C[k++] = A[i++];

         while (j<m)
         C[k++] = B[j++];

         printf("Merged arrays:\n");

         for (i = 0; i<k ; k++)
         printf("%d" , C[i]);

         return 0;

}



