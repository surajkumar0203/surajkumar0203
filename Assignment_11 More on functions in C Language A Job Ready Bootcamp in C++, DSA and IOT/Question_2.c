/*
    Question 2. Write a function to calculate HCF of two numbers. (TSRS)

*/

#include<stdio.h>
int HCF(int x,int y)
{
    int k;
    if(x>y)
        k=x;
    else    
        k=y;

    for(;k!=0;k--)
        if(x%k==0 && y%k==0)
            return k;
}
int main()
{
    int a,b;
    printf("Enter Two number: ");
    scanf("%d%d",&a,&b);

    printf("HCF of %d and %d is %d\n",a,b,HCF(a,b));
    return 0;
}