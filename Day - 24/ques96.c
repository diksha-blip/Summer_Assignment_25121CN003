// program to remove duplicate characters

#include <stdio.h>

int main ()
{
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string:");
    fgets(str, sizeof(str),stdin);

    //count frequency of each character 
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
        freq[(unsigned char)str[i]]++;
    }

    printf("Duplicate characters are:\n");

    for  (i = 0; i<256; i++)
    {
        if (freq[i] >1)
        printf("%c = %d\n" , i , freq[i]);
    }

    return 0;
}