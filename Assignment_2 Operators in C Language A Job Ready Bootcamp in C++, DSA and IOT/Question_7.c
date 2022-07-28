/*
    Question 7. Write a program to find the position of first 1 in LSB.
*/

#include<stdio.h>
 
int main()
{
    int num,x=0,count=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    int num1=num;
    while(x!=1 && num!=0)
    {
        x=num&1;
        count++;
        num>>=1;
    }
    printf("%d\n",count);
    return 0;
}