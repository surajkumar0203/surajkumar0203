/*
    Question 4.c
    Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/
#include<stdio.h>
 
int main()
{
    int array[10],greatest_num=0;
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d Number: ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        if(greatest_num<array[i])
        {
            greatest_num=array[i];
        }
    }
    printf("Greatest number: %d\n",greatest_num);
    return 0;
}