// Question 10. Write a program to print a table of N.
#include<stdio.h>

int main()
{
    int n;
    printf("Which Table You Want To Print: ");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}