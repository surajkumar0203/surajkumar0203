/*
    Question 1 Write a function to calculate LCM of two numbers. (TSRS)
*/
#include<stdio.h>
 
int LCM(int x,int y)
{
    int i;
    if(x>y)
        i=x;
    else
        i=y;
    
    int n=i;
    for(;i<=x*y;i=i+n)
        if(i%x==0 && i%y==0)
            return i;
}
int main()
{
    int a,b;
    printf("Enter Two Number: ");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is %d\n",a,b,LCM(a,b));
    return 0;
}