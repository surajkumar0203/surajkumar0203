/*
    Question 6. Write a function to print first N prime numbers (TSRN)
*/
#include<stdio.h>
void FirstNPrime(int num)
{
    int flag,k=1,i=0;
    while(i!=num)
    {
        
        flag=0;
        for(int j=2;j<=k/2;j++)
        {
            if(k%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && k!=1)
        {
            printf("%d ",k);
            i++;
        }
        k++;
    }
    
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    FirstNPrime(num);
    printf("\n");
    return 0;
}