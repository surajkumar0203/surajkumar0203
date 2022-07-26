/*
    Question 3. Write a function to check whether a given number is Prime or not. (TSRS)
*/

#include<stdio.h>
int check_prime(int num)
{
    if(num==1)  
        return 1;
    for(int i=2;i<=num-1;i++)
        if(num%i==0)
            return 1;
    return 0;
}
int main()
{
    int a;
    printf("Check Number Is Prime or Not: ");
    scanf("%d",&a);

    if(check_prime(a))
        printf("%d is not prime number \n",a);
    else
        printf("%d is prime number \n",a);
    return 0;
}