/*
    Question 7. Write a recursive function to calculate HCF of two numbers
*/
#include<stdio.h>
int HCF(int n,int n1)
{
    if(n==0)
        return n1;
    else if(n1==0)
        return n;
    if(n>n1)
        return HCF(n%n1,n1);
    else
        return HCF(n,n1%n);
}
int main()
{
    int num,num1;
    printf("Enter Two Number: ");
    scanf("%d%d",&num,&num1);

    
    printf("HCF of %d and %d is %d\n",num,num1,HCF(num,num1));
    return 0;
}