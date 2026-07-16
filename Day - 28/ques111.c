// program to create ticket booking system 

#include<stdio.h>

int main()
{
    int totalSeats = 50;
    int bookedSeates, choice;

    do 
    {
        printf("\n-----TICKRT BOOKING SYSTEM-----\n");
        printf("1.Book Tickets\n");
        printf("2.Check Available Seats\n");
        printf("3.Exit\n");
        printf("Enter your choice:");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
              printf("Enter number of tickets to book:");
              scanf("%d" , &bookrdSeats);

              if(bookedSeats <= totalSeats)
              {
                totalSeats -= bookedSeats;
                printf("Booking Successful!\n");
                printf("Reamaining Seats:%d\n" , totalSeats);
              }
              else
              {
                printf("Sorry! Not enough seats available.\n");
              }
              break;

              case 2:
                printf("Available Seats:%d\n" , totalSeats);
                break;

             case 3:
               printf("Thank you for using the Ticket Booking System.\n ");
               break;

            default:
              printf("Invalid  Choice!\n");
        }
    }
    while( choice != 3);

    return 0;
}
