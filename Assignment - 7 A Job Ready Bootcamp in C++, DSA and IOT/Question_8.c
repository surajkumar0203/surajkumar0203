//Question 8. Write a program to find next Prime number of a given number
#include<stdio.h>

int main()
{
    int n;
    int i=2;
    
    printf("Enter any number : ");
    scanf("%d",&n);
    int k=n+1;
    
    while(k)
    {
        i=2;
        while(i<k)
        {
            if(k%i==0)
                 break;
            i++;
        }
       if(i==k)
       {
           printf("%d",k);
           break;
       }
        k++;
    }
    return 0;
}