//Question 6. Write a program to print all Prime numbers under 100
#include<stdio.h>

int main()
{
    int flag;
    for(int i=1;i<=100;i++)
    {
        flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0 )
            {
                flag=1;
                break;
            }
        }
        if(flag==0 &&i!=1)
            printf("%d ",i);
    }
    return 0;
}