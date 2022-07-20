// Question 9.Draw the Patterns.
/*
    
  1234321
   12321 
    121
     1
*/
#include<stdio.h>

int main()
{
    int i,j,k=0,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i && j<=(2*n)-i)
            {
                if(j<=n)
                    k++;
                else
                    k--;
                printf("%d",k);
            }
            else
            {
                printf(" ");
            }
        }
        k=0;
        printf("\n");
    }
    return 0;
}