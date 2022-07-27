/*
    Question 8. Write a recursive function to print first N terms of Fibonacci series
*/
#include<stdio.h>
int febo(int n)
{
    if(n==2 || n==1)
        return n-1;
    return(febo(n-1)+febo(n-2));
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
        printf("%d ",febo(i));
    
    
    return 0;
}