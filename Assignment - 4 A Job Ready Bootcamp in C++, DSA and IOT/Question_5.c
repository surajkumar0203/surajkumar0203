// Question 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>

int main()
{
    for(int i=9;i>=0;i--)
    {
        printf("%d ",2*i+1);
    }
    return 0;
}