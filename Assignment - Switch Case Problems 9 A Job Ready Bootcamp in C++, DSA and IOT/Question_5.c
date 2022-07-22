/*
   Question 5. Convert the following if-else-if construct into switch case:
        if(var == 1)
        System.out.println("good");
        else if(var == 2)
        System.out.println("better");
        else if(var == 3)
        System.out.println("best");
        else
        System.out.println("invalid");
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    while(1)
    {
        printf("\nEnter Number 1 to 3: \n");
        printf("Press 4 To Exite\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("good\n");
                break;
            case 2:
                printf("better\n");
                break;
            case 3:
                printf("best\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Input\n");
        }
    }
    return 0;
}