// Question 7.Write a program to count digits in a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0;

    printf("Enter Number: ");
    scanf("%d",&n);
    int n1=n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    
    printf("Number of Digits of %d is %d",n1,count);
    
    return 0;
}