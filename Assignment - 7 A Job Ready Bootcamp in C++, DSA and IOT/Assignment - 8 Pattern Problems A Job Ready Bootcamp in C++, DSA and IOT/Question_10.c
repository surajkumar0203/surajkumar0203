// Question 10.Draw the Patterns.
/*
    1234321
    123 321
    12   21
    1     1
*/

#include <stdio.h>

int main()
{
    int i, j;
    int k,n;
    
    printf("Enter Number: ");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++)
    {
        k = 1;
        for (j=1;j<=2*n-1;j++)
        {
            if (j<=n+1-i || j>=n-1+i)
            {
                printf("%d", k);
                if (j >= n)
                    k--;
                else
                    k++;
                
            }
            else
            {
                printf(" ");
                if (j >= n)
                    k--;
                else
                    k++;
                
            }
        }
        printf("\n");
    }
    return 0;
}