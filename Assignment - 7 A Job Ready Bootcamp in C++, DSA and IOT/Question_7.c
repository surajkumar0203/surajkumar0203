//Question 7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int main()
{
    int start,end,flag;;
    printf("Enter starting number: ");
    scanf("%d",&start);
    printf("Enter last number: ");
    scanf("%d",&end);
    
    for(int i=start;i<=end;i++)
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