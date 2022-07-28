/*
    Question 1 Write a program to print unit digit of a given number
*/
#include<stdio.h>
 
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Unti digits of %d is %d\n",num,num%10);
    return 0;
}
