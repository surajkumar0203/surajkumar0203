// Question 1.Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}