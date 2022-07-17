// Question 10. Write a program to reverse a given number
#include<stdio.h>

int main()
{
    int n,r,x=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        x=x*10+r;
        n=n/10;
    }
    printf("%d",x);
    return 0;
}