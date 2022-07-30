/*
    Question 2. Write a function to calculate simple interest. (TSRS)
*/
#include<stdio.h>
int Simple_Interest(int,int,int);

int main()
{
    int principal,Rate,Time;
    
    printf("Enter Principal Amount: ");
    scanf("%d",&principal);

    printf("Enter Rate: ");
    scanf("%d",&Rate);

    printf("Enter Time: ");
    scanf("%d",&Time);

    int result=Simple_Interest(principal,Rate,Time);

    printf("%d",result);
    return 0;
}

int Simple_Interest(int p,int r,int t)
{
    return p*r*t/100;
}