// Question 4. Write a program to print the first N odd natural numbers
#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",2*i+1);
    }
    return 0;
}