// Question 4.Draw the Patterns.
/*
    *****
     ****
      ***
       **
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
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}