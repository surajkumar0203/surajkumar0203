// Question 11.Draw the Patterns.
/*
            A
          A B A
        A B C B A
      A B C D C B A
    A B C D E D C B A

*/
#include<stdio.h>

int main()
{
    int i,j,k=64,n;

    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n+1;j++)
        {
            
            if(j>=n+1-i && j<=n-1+i)
            {
                if(j<=n)
                    k++;
                else
                    k--;
                printf("%c ",k);
            }
            else
            {
                printf("  ");
            }
        }
        k=64;
        printf("\n");
    }
    return 0;
}