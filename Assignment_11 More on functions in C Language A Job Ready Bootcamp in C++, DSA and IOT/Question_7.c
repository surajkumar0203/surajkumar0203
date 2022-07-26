/*

    Question 7. Write a function to print first N terms of Fibonacci series (TSRN)
*/
#include<stdio.h>
void N_term_fibo(int num)
{
    int a=1,b=1,c,i=0;

    do
    {
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
        i++;
    }while(i<num);

    printf("\n");
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    N_term_fibo(num);
    return 0;
}