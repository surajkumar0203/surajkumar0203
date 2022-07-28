/*
    Question 5. Write a program to input a three-digit number and display the sum of the digits.
*/
#include<stdio.h>
 
int main()
{
    int num,rem,x=0;
    printf("Enter three digits number: ");
    scanf("%d",&num);
    if(num>=100 && 999>=num)
    {   
        while(num!=0)
        {
            rem=num%10;
            x+=rem;
            num/=10;
        }
        printf("%d\n",x);
    }
    else
        printf("Number is not three digits\n");

    return 0;
}