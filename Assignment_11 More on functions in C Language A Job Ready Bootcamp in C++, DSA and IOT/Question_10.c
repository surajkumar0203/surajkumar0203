/*
    Question 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.

*/

#include<stdio.h>
void sum_of_series(int num)
{
    int fact=1,j=1,sum=0;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
        sum=sum+fact/i;
    }
    printf("%d\n",sum);
    
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    sum_of_series(num);
    return 0;
}
