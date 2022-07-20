//  Question 18.Draw the Patterns.
/*

        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
*/
#include<stdio.h>

int main()
{
    int i,j,m=0,n,num,n1;
    printf("Enter number: ");
    scanf("%d",&num);
    
    
    if(num%2)
    {
        n=(num/2)+2;
        
    }
    else
    {
        n=(num/2)+1;
        
    }
    
    for(i=1;i<=num;i++)
    {
        i>=n?m--:m++;
       
        for(j=1;j<=num;j++)
        {
             
            if(j>=n-m && j<=n-2+m)
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