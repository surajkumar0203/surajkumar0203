// Question 7.Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
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

int combinations(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int main()
{
    int ans=combinations(10,7);
    printf("%d\n",ans);
    return 0;
}


