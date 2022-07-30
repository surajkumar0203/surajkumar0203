/*
    Question 6. Write a function to calculate the factorial of a number. (TSRS)
*/

#include<stdio.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter Number To Calculate Factorial: ");
    scanf("%d",&num);

    printf("%d ",factorial(num));
    return 0;
}