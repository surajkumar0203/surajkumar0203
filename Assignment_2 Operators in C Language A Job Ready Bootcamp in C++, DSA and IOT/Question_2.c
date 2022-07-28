/*
    Question 2. Write a program to print a given number without its last digit.
*/
#include<stdio.h>
 
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Without Last Digits of %d is %d\n",num,num/10);
    return 0;
}