// Question 6.Write a program to calculate factorial of a number
#include<stdio.h>

int main()
{
   int n,fact=1;
   printf("Enter a number: ");
   scanf("%d",&n);
    int n1=n;
   while(n!=1)
   {
        fact*=n;
        n--;
   }
    printf("factorial of %d is %d",n1,fact);
}