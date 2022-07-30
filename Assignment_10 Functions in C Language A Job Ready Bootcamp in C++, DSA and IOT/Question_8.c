/*
    Question 8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)
*/

#include<stdio.h>
int fact(int n)
{
    int fac=1;
    for(int i=2;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}

int permutation(int n,int r)
{
    return fact(n)/fact(n-r);
} 
int main()
{
    int ans=permutation(10,7);
    printf("%d\n",ans);
    return 0;
}