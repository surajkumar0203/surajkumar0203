/*
    Question 9. Program to Convert even number into its upper nearest odd number
            Switch Statement.
*/

#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter even number : ");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0:
            printf("%d\n",num+1);
            break;
        default:
            printf("%d is Not Even Number\n",num);
            break;
    }
    return 0;
}