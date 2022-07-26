/*
    Question 8. Write a function to print PASCAL Triangle. (TSRN)
*/
#include<stdio.h>

int fact(int n)
{
    if(n>=1)
        return fact(n-1)*n;
    return 1;
}

void pascal_triangle(int num)
{
    int i,j,k=1;
    int n=0,r;

    for(i=1;i<=num;i++,n++)
    {
        r=0;
        for(j=1;j<=2*num-1;j++)
        {
            if(j>=(num+1)-i && j<=(num-1)+i && k==1)
            {
                k=0;
                printf("%d",fact(n)/(fact(n-r)*fact(r)));
                r++;
            }
            else
            {
                k=1;
                printf(" ");
            }
           
        }
        printf("\n");
        
    }
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    pascal_triangle(num);
    
    return 0;
}