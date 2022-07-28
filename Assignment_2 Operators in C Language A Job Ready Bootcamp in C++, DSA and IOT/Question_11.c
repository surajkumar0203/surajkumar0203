/*
    Question 11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
*/

#include<stdio.h>
 
int main()
{
    int num,x=0,r;
    short int digits;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Enter digits(1 to 9): ");
    scanf("%hi",&digits);
    
    if(digits>=1 && digits<=9)
    {
        while(digits!=0)
        {
            r=digits%10;
            x=x*10+r;
            digits/=10;
        }
        num=num*10+x;
        
        printf("%d\n",num);
    }
    else
        printf("Only single Digits alow\n");
    
    
    return 0;
}