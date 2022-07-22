/*
    Question 8. Program to convert a positive number into a negative number and negative
    number into a positive number using a switch statement.
*/
#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter number: ");
    scanf("%d",&num);

    switch(num>0)
    {
        case 1:
            num=0-num;
            printf("%d\n",num);
            break;
        default:
            num=0-num;
            printf("%d\n",num);
            break;
    }
    return 0;
}