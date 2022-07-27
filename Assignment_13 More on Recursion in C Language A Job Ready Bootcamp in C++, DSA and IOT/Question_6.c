/*
    Question 6. Write a recursive function to calculate factorial of a given number
*/
#include<stdio.h>
int fact(int n)
{
    if(n>=1)
        return fact(n-1)*n;
    return 1;
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Factorial of %d is %d\n",num,fact(num));
    return 0;
}