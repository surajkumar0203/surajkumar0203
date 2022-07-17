// Question 6.Write a program to print the first N even natural numbers
#include<stdio.h>

int main()
{
    int i=1,n;

    printf("Enter Number: ");
    scanf("%d",&n);
    
    do
    {
        printf("%d ",2*i);
        i++;
    }while(i<=n);

}