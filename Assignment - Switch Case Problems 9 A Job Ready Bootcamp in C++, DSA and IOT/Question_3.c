/*
Question 3 Write a program which takes the day number of a week and displays a
unique greeting message for the day

*/
#include<stdio.h>

int main()
{
    int choice;
    while(1)
        {
            printf("\nEnter Day Number of  a week: \n");
            printf("Press 8 To Exite\n");
            scanf("%d",&choice);

            switch(choice)
            {
                case 1:
                    printf("Hello Sunday\n");
                    printf("Wishing You A Blessed and Beautiful Sunday\n");
                    break;
                case 2:
                    printf("Hello Monday\n");
                    printf("Wishing You A Great Week\n");
                    break;
                case 3:
                    printf("Hello Tuesday\n");
                    printf("Have A Joy Filled Tuesday\nGod Bless\n");
                    break;
                case 4:
                    printf("Hello Wednesday\n");
                    printf("Have A Blessed Wednesday");
                    break;
                case 5:
                    printf("Hello Thursday\n");
                    printf("I Hope You Have\nA Wonderful Thursday\n");
                    break;
                case 6:
                    printf("Hello Friday\n");
                    printf("Have A Nice Day\n");
                    break;
                case 7:
                    printf("Hello Saturday\n");
                    printf("Have A Wonderful Weekend\n");
                    break;
                case 8:
                    return 0;
                default:
                    printf("Invalid Input\n");
            }
        }
        
}