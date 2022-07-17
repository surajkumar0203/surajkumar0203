// Question 5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    
    for(int i=n;i>=0;i--)
    {
        printf("%d ",2*i+1);
    }
    return 0;
}