/*
    Question 9. Write a function to check whether a given number contains a given digit or not.
(TSRS)
*/
#include<stdio.h>
int check_digits(int n,int d)
{
    int x;
    while(n!=0)
    {
        x=n%10;
        if(x==d)
            return 1;
        n/=10;
    }
    return 0;
}
int main()
{
    int num,digits;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Enter Digits: ");
    scanf("%d",&digits);

    if(check_digits(num,digits))
        printf("%d digits is present in %d number\n",digits,num);
    else
        printf("%d digits is not present in %d number\n",digits,num);
    return 0;
}