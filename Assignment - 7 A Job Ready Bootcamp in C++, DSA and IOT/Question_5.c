//Question 5 Write a program to check whether two given numbers are co-prime
// numbers or not
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
    
    if(k==1)
        printf("%d %d is Co-prime",a,b);
    else
        printf("%d %d is not Co-prime",a,b);
    
    return 0;
}