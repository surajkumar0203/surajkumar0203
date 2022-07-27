/*
    Question 5. Write a recursive function to calculate sum of digits of a given number
*/
#include<stdio.h>
int sum_of_digits(int num)
{
    int x;
    if(num!=0)
    {
        x=num%10;
        return sum_of_digits(num/10)+x;
    }
    return 0;

}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

   
    printf("Sum of %d is %d\n",num,sum_of_digits(num));
    return 0;
}