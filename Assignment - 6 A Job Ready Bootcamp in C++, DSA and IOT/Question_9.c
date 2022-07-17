// Question 9.Write a program to calculate LCM of two numbers
#include<stdio.h>

int main()
{
    int num1,num2,Lcm;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    
    if(num1>num2)
        Lcm=num1;
    else
        Lcm=num2;
    int n=Lcm;
    for(;Lcm<=num1*num2;Lcm=Lcm+n)
    {
        if(Lcm%num1==0 && Lcm%num2==0)
        {
            printf("LCM of %d and %d is %d",num1,num2,Lcm);
            break;
        }
    }
   
    return 0;
}