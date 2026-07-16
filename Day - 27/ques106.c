// program to create employee management system

#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[10];
    int n , i;

    printf("Enter the number of employee:");
    scanf("%d" , &n);

    //Input employee details
    for(i = 0; i<n; i++)
    {
        printf("\nEnter details of employee%d\n" , i+1);

        printf("Employee ID:");
        scanf("%d" , &emp[i].id);
        
        printf("Employee Name:");
        scanf("%s" , emp[i].name);

        printf("Salary:");
        scanf("%f" , &emp[i].salary);

    }

    //display employee details
    printf("\n----- Employee Records-----\n");

    for(i = 0; i<n ; i++)
    {
        printf("\nEmployee %d\n" , i+1);
        printf("Employee ID:%d\n" , emp[i].id);
        printf("Employee Name:%s\n", emp[i].name);
        printf("Salary:%.2f\n" , emp[i].salary);
    }

    return 0;
}
