// progrram to create salary management system

#include<stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basicSalary , hra , da , grossSalary;
};

int main()
{
    struct Employee emp;
    float hraPercent = 20, daPercent = 10;

    printf("Enter Employee ID:");
    scanf("%d" , &emp.id);

    printf("Enter Employee Name :");
    scanf("%s" , &emp.name);

    printf("Enter Basic Salary:");
    scanf("%f" , &emp.basicSalary);

    //calculate HRA , DA and Gross Salary
    emp.hra = (hraPercent/100) * emp.basicSalary;
    emp.da = (daPercent/100) * emp.basicSalary;
    emp.grossSalary = emp.basicSalary + emp.hra + emp.da;

    printf("\n----- Salary Details-----\n");
    printf("Employee ID : %d\n" , emp.id);
    printf("Employee Name : %s\n" , emp.name);
    printf("Basic Salary : %.2f\n" , emp.basicSalary);
    printf("HRA          : %.2f\n" , emp.hra);
    printf("DA           :%.2f\n" , emp.da);
    printf("Gross Salary : %.2f\n" , emp.grossSalary);

    return 0;
}
