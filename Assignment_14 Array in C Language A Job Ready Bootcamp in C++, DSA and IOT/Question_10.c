/*
    Question 10.

    Write a program in C to copy the elements of one array into another array.Take array
    values from the user.
*/
#include<stdio.h>
 
int main()
{
    int array[10],i;
    int copy_array[10];
    for(i=0;i<10;i++)
    {
        printf("%d Number: ",i+1);
        scanf("%d",&array[i]);
    }

    //copy one array to another array.

    for(i=0;i<10;i++)
    {
        copy_array[i]=array[i];
    }

    // print array
    printf("Original Array\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    // print copy_array
    printf("Copy array\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",copy_array[i]);
    }
    printf("\n");
    return 0;
}