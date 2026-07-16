//program to create library management system 

#include<stdio.h>

struct Book 
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book book[10];
    int n , i;

    printf("Enter number of books:");
    scanf("%d" , &n);

    //input book details
    for ( i = 0; i <n ; i++)
    {
        printf("\nEnter details of Book %d\n" , i+1);

        printf("Book ID:");
        scanf("%d" , &book[i].id);

        printf("Book TItle:");
        scanf("%s" , &book[i].title);

        printf("Author Name:");
        scanf("%s" , &bok[i].author);

    }
    //display book details 
    printf("\n----- Library Records-----\n");

    for (i=0 ; i<n ; i++)
    {
        printf("\nBook %d\n" , i+1);
        printf("Book ID   :%d\n" , book[i].id);
        printf("Book Title :%s\n" , book[i].title);
        printf("Author Name :%s\n" , book[i].author);
    }
    return 0;
}
