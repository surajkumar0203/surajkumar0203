/*
    Write a function to print all prime factors of a given number. For example, if the
    number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include<stdio.h>
void prime_factor(int num)
{
   if(num<=1)
   {
        printf("Number only 2 or greater then 2\n");
        return;
   }
    int i=2;
    while(num>1)
    {
        while(num%i==0)
        {
            printf("%d, ",i);
            num=num/i;
        }
        i++;
    }
    
    printf("\b \b \b\b ");
    printf("\n");
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    
    prime_factor(num);
    
    return 0;
}