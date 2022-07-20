// Question 13.Draw the Patterns.
/*
    ABCDEFGFEDCBA
    ABCDEF FEDCBA
    ABCDE   EDCBA
    ABCD     DCBA
    ABC       CBA
    AB         BA
    A           A
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
        k = 65;
        for (j=1;j<=2*n-1;j++)
        {
            if (j<=n+1-i || j>=n-1+i)
            {
                printf("%c",k);
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