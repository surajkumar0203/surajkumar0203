/*
    Question 5. 

    Write a program to find the smallest number stored in an array of size 10. Take array
    values from the user.

*/

#include<stdio.h>
 
int main()
{
    int array[10],smallest_num=0;
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d Number: ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        if(smallest_num>array[i])
        {
            smallest_num=array[i];
        }
    }
    printf("smallest number: %d\n",smallest_num);
    return 0;
    
}