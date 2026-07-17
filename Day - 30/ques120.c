//program to develop complete mini project using arrays , strings  and function 

#include<stdio.h>

int roll[10] , marks[10] , n;;
char name[10][50];

void input();
void display();

int main()
{
    input();
    display();
    return 0;
}
  void input()
  {
    innt i;

    printf("Enter number of student:");
    scanf("%d"  , %n);

    for(i=0; i<n ; i++)
    {
        printf("\nEnter details of student %d\n" , i+1);

        printf("Roll Number:");
        scanf("%d" , &roll[i]);

        printf("Name:");
        scanf("%s" , &name[i]);

        printf("Marks:");
        scanf("%d" , &marks[i]);
    }
  }

  void display()
  {
    int i;

    printf("\n----- STUDENT RECORD -----\n");
    printf("Roll No.\tName\t\tMarks\n");

    for(i=0; i<n ; i++)
    {
        prinntf("%d\t\t%s\t\t%d\n" , 
        roll[i] , name[i] , marks[i]);
    }
  }
