// Question 7.Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;

    printf("Enter Number: ");
    scanf("%d",&i);
    
    do
    {
       printf("%d ",2*i);
       i--;
    } while (i>=1);
    
    return 0;
}