// Write a program to print first N terms of Fibonacci Series.
#include<stdio.h>

int main()
{
    int a=0,b=1,sum,num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    int i=0;
    do
    {
        printf("%d,",a);
        sum=a+b;
        a=b;
        b=sum;
        i++;
    }while(i<num);
    printf("\b \b");
    return 0;
}