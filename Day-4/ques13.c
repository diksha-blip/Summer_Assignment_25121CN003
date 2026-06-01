#include<stdio.h>
int main()
{
  int a, first =0, second = 1,next , i;
  
  printf("Enter the numbers of terms:");
  scanf("%d", &n);

  printf("Fibonacci series:%d%d", first, second);

  for( i=3;i<=n;i++)
  {
    next = first + second;
    printf("%d",next);
    first = second;
    second = next;

  }

  printf ("\n");
  return 0;
  }
  

