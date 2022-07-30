/*
    Question 3.Write a function to check whether a given number is even or odd. Return 1 if the
    number is even, otherwise return 0.
*/

#include<stdio.h>
int odd_or_even(int);

int main()
{
    int num;
    printf("Enter number to odd or even: ");
    scanf("%d",&num);

    int r=odd_or_even(num);
    
    if(r)
        printf("%d is even number",num);
    else
        printf("%d is odd number",num);
    return 0;
}

int odd_or_even(int n)
{
    if(n%2)
        return 0;
    return 1;
}