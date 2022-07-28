/*
    Question 4. Write a program to swap values of two int variables without using a third variable.
*/
#include<stdio.h>
 
int main()
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("First Number is %d\n",a);
    printf("Second Number is %d\n",b);
    return 0;
}