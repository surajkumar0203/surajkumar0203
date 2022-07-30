/*
    Question 5. Write a function to print first N odd natural numbers. (TSRN)
*/

#include<stdio.h>

void firstNOddnumber(int n)
{
    int i=0;
    while(i!=n)
    {
        printf("%d ",i*2+1);
        i++;
    }
}

int main()
{
    int num;
    
    printf("How many number print: ");
    scanf("%d",&num);
    
    firstNOddnumber(num);
    return 0;
}