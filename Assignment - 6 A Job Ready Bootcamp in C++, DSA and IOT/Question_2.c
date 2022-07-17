//Question 2.Write a program to calculate sum of first N even natural numbers
#include<stdio.h>

int main()
{
    int i=1,n,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);
   
    for(;i<=n;i++)
    {
        sum+=2*i;
    }
    printf("%d",sum);
    return 0;
}