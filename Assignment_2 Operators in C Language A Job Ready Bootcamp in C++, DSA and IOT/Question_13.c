/*
    Question 13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.
*/

#include<stdio.h>
 
int main()
{
    int x,y,num;
    printf("Enter three digits number: ");
    scanf("%d",&num);

    if(num>=100 && 999>=num)
    {
        x=num/10;
        y=num%10;
        x=y*100+x;
        printf("%d\n",x);
    }
    else
        printf("Number is not three digits\n");
    return 0;
}