// Question 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>

int main()
{
    int number,i;
    printf("Enter A number: ");
    scanf("%d",&number);

    for(i=2;i<=number-1;i++)
    {
        if(number%i==0)
            break;
    }
    
    if(i==number)
        printf("%d is Prime Number",number);
    else
        printf("%d is  not Prime Number",number);
    
    return 0;
}