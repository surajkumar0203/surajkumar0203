/*
    Question 4.   Write a function to print first N natural numbers (TSRN)
*/

#include<stdio.h>

void firstNnatural(int n)
{
    int i=1;
    while(i<=n)
        printf("%d ",i++);
}
int main()
{
    int num;
    printf("How many number print: ");
    scanf("%d",&num);
    
    firstNnatural(num);
    return 0;
}