// Question 17.Draw the Patterns.
/*
         *********
          *     *
           *   *
            * *
             *


*/

#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j==i || j==2*n-i ||i==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}