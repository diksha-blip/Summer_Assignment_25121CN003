// program to find maximum occuring character

#include<stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter a string :");
    fgets(str , sizeof(str) , stdin);

    //count frequency  of each character 
    for (i = 0; str[i] != '\0'; i++)
{
    if(str[i] != '\n')
    freq[(unsigned char )str[i]]++;

}

//find maximum occuring character 
   for (i = 0; i<256 ; i++)
   {
    if (freq[i] > max)
    {
        max = freq[i];
        ch = i;
    }
   }

   printf("Maximum occuring character :%c\n");
   printf("Frequency :%d\n " , max);


   return 0;

}

