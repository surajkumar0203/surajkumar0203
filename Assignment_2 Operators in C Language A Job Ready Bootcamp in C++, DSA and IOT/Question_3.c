/*
    Question 3. Write a program to swap values of two int variables
*/
#include<stdio.h>
 
int main()
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);

    int temp=a;
    a=b;
    b=temp;

    printf("First Number is %d\n",a);
    printf("Second Number is %d\n",b);
    return 0;
}