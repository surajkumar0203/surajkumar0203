/*
    Question 5. Write a recursive function to print first N even natural numbers

*/

#include<stdio.h>
void N_Even_natural_number(int num)
{
    if(num!=1)
        N_Even_natural_number(num-1);
    printf("%d ",num+num);
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    N_Even_natural_number(num);
    printf("\n");
    return 0;
}