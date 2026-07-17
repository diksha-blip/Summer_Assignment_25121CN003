// program to create inventory management  system

#include<stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[10];
    int n , i;

    printf("Enter number of items:");
    scanf("%d" , &n);

    //input item details
    for(i = 0; i<n ; i++)
    {
        printf("\nEnter details of Item %d\n");

        printf("Item ID:");
        scanf("%d" , &item[i].id);

        printf("Item Name:");
        scanf("%s" , item[i].name);

        printf("Quantity:");
        scanf("%d" , item[i].quantity);

        printf("Price:");
        scanf("%f" , &item[i].price);
    }

    //display inventory
    printf("\n-----INVENTORY RECORDS -----\n");

    for(i= 0 ; i<n ; i++)
    {
        printf("\nItem %d\n" , i+1);
        printf("Item ID  : %d\n" , item[i].id);
        printf("Item Namr : %s\n" , item[i].name);
        printf("Quantity  :%d\n" , item[i].quantity);
        printf("Price     :%.2f\n" ,item[i].price );
    }

    return 0;
}
