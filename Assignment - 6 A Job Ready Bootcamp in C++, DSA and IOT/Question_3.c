// Question 3.Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>

int main()
{
    int i=0,n,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);
   
    for(;i<n;i++)
    {
        sum+=2*i+1;
        
    }
    printf("%d",sum);
    return 0;
}