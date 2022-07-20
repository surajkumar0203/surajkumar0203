//Question 3.  Write a program to check whether a given number is there in the Fibonacci
// series or not.
#include<stdio.h>
int main()
{
    int n,a=0,b=1,sum,num;
    printf("Enter range: ");
    scanf("%d",&num);
    printf("Check Number is feboacci is or nor : ");
    scanf("%d",&n);


    if(num<n)
    {
        printf("out of range");
        return 0;
    }
    int i=1;
    do
    {
        sum=a+b;
        a=b;
        if(a==n)
        {
            printf("%d is fibonacci series",n);
            break;
        }
        b=sum;
        i++;
    }while(i<num);
    
    if(i==num)
        printf("%d is not fibonacci series",n);
    
    return 0;
}