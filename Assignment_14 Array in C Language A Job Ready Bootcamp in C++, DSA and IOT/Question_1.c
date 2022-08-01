/*
    Question 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
                array values from the user.

*/
#include<stdio.h>
 
int main()
{
    int array[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("%d Number: ",i+1);
        scanf("%d",&array[i]);
    }

    for(i=0;i<10;i++)
    {
        sum+=array[i];
    }

    printf("sum= %d\n",sum);
    return 0;
}