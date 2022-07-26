/*
    Question 6. Write a recursive function to print first N even natural numbers in reverse order
*/

#include<stdio.h>
void N_Even_natural_number_reverse_order(int num)
{
    printf("%d ",num+num);
    if(num!=1)
        N_Even_natural_number_reverse_order(num-1);
    
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    N_Even_natural_number_reverse_order(num);
    printf("\n");
    return 0;
}