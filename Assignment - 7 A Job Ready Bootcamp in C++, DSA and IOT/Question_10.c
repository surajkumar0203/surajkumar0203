// Question 10 Write a program to print all Armstrong numbers under 1000
#include<stdio.h>

int main()
{
    int i,rem,k,p,count=0;
   
    for(i=1;i<=1000;i++)
    {
        k=0;
        for(p=i;p!=0;p/=10)
        {
            rem=p%10;
            k=k+(rem*rem*rem);
        }
        if(i==k && i>1)
        {
            printf("%d is Armstrong numbers %d\n",++count,k);
        }
        
    }

    return 0;
}