// Question 4. Write a program to calculate HCF of two numbers
#include<stdio.h>

int main()
{
    int a,b,k;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    if(a<b)
        k=a;
    else
        k=b;
    
    for(k;k>=1;k--)
    {
        if(a%k==0 && b%k==0)
            break;
        
    }
    printf("%d",k);
    return 0;
}