/*
    Question 8. Write a program to check whether the given number is even or odd using a bitwise
operator.
*/

#include<stdio.h>
 
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    if(num&1)
        printf("%d is odd number\n",num);
    else
        printf("%d is even number\n",num);
    return 0;
}