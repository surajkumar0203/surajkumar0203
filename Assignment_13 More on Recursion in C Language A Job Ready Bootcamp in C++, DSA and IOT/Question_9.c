/*
    Question 9. Write a program in C to count the digits of a given number using recursion
*/
#include<stdio.h>
int count_digits(int n)
{
    int count=1;
    if(n!=0)
        return count_digits(n/10)+count;
    return 0;
    
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    

    if(num==0)  // if user enter 0. 0 has 1 digits.
        printf("Number Of Digits Of %d Is 1\n",num);
    else
        printf("Number Of Digits Of %d Is %d\n",num,count_digits(num));
    return 0;
}