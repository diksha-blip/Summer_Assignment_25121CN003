//program to create mini library system 

#include<stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main ()
{
  struct Book book[10];
  int n,i;


  printf("Enter number of books:");
  scanf("%d" , &n);

  //Input book details
  for (i=o;i<n;i++)
  {
    printf("\nEnter details of book %d\n",i + 1);
      
    printf("Book ID":);
    scanf("%d" , &book[i].id);

    printf("Book Title:");
    scanf("%s" , &book[i].title);

    printf("Author Name:");
    scanf("%s" , book[i].author);
 
  }
  //display all books
  printf("\n----- MINI LIBRARY SYSTEM -----\n");
  printf("\nBook ID \tTitle\t\tAuthor\n")l;

  for(i =0 ; i<n ; i++)
{
      printf("%dt%s\\t\t%s\n" , book[i].id , book[i].title , book[i].author);
}

   return 0;
}


