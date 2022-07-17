//Question 2.Write a program to print the first N natural numbers.
#include<stdio.h>

int main()
{
    int i=1,n;
    printf("Enter Number: ");
    scanf("%d",&n);
   
    while(i<=n)
        printf("%d ",i++);
    
    return 0;
}