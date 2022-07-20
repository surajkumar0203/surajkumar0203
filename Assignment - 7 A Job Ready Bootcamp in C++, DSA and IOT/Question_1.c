//Question 1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>

int main()
{
    int n,a=0,b=1,sum;
    printf("Enter number : ");
    scanf("%d",&n);

    int i=1;
    do
    {
        sum=a+b;
        a=b;
        b=sum;
        i++;
    }while(i<n);
    
    printf("%d trem of febonnaci is: %d",n,a);
    return 0;
}