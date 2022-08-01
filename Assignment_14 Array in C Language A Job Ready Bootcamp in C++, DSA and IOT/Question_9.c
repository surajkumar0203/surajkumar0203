/*
    Question 9.
        Write a program in C to read n number of values in an array and display it in reverse
        order. Take array values from the user.

*/
#include<stdio.h>
 
int main()
{
    
    
    int i,t,n;
    
    printf("No of elements: ");
    scanf("%d",&n);
    int array[n];
    
    /*
        Take input from user
    */
    
    for(i=0;i<n;i++)
    {
        printf("%d Number: ",i+1);
        scanf("%d",&array[i]);    
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]); // print array
    }
    
    printf("\n");
    
    for(i=0;i<n/2;i++)
    {
        t=array[i];
        array[i]=array[n-i-1]; // reverse the array
        array[n-i-1]=t;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);  //print array after reverse
    }
    printf("\n");
    return 0;
}