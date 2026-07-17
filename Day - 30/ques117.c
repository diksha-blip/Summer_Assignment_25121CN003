//program to create student record using arrays and strings

#include<stdio.h>

int main()
{
    int roll[10] , marks[10] , n , i;
    char name[10][50];

    printf("Enter number of students:");
    scanf("%d" , &n);

    //input student details
    for( i=0; i<n ; i++)
    {
        printf("\nEnter details of student %d\n" , i+1);

        printf("Roll Number:");
        scanf("%d" , &roll[i]);

        printf("Name:");
        scanf("%s" , &name[i]);

        printf("Marks:");
        scanf("%d" , &marks[i]);
    }

    //display student records
    printf("\n----- STUDENT RECORDS -----\n");

    printf("\nRoll No.\tName\t\tMarks\n");
    for(i = 0; i<n ; i++)
    {
        printf("%d\t\t%s\t\t%d\n" , roll[i] , name[i] , marks[i]);
    }
    return 0;
}
