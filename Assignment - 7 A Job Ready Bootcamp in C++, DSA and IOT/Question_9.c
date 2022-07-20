// Question 9. Write a program to check whether a given number is an Armstrong number
// or not
#include<stdio.h>

int main()
{
    int i,rem,k=0,p;
    printf("Enter Number: ");
    scanf("%d",&i);

    p=i;

    while(p!=0)
    {
        rem=p%10;
        k+=(rem*rem*rem);
        p/=10;
    }
    if(k==i)
        printf("%d is Armstrong number\n",i);
    else
        printf("%d is not Armstrong number\n",i);
    return 0;
}