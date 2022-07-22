/* 
  Question 1.  Write a program which takes the month number as an input and display
    number of days in that month.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    while(1)
    {
        printf("\nEnter Number of Day in month: \n");
        printf("Press 13 To Exite\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Number of Days in January is 31\n");
                break;
            case 2:
                printf("Number of Days in February is 28\n");
                printf("if leap year Number of Days in February is 29\n");
                break;
            case 3:
                printf("Number of Days in March is 31\n");
                break;
            case 4:
                printf("Number of Days in April is 30\n");
                break;
            case 5:
                printf("Number of Days in May is 31\n");
                break;
            case 6:
                printf("Number of Days in June is 30\n");
                break;
            case 7:
                printf("Number of Days in July is 31\n");
                break;
            case 8:
                printf("Number of Days in August is 31\n");
                break;
            case 9:
                printf("Number of Days in September is 30\n");
                break;
            case 10:
                printf("Number of Days in October is 31\n");
                break;
            case 11:
                printf("Number of Days in November is 30\n");
                break;
            case 12:
                printf("Number of Days in December is 31\n");
                break;
            case 13:
                exit(0);
            default:
                printf("Invalid Input\n");
        }
    }
    return 0;
}