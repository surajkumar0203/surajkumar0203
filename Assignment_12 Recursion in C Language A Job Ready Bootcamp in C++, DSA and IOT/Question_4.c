/*
    Question 4. Write a recursive function to print first N odd natural numbers in reverse order
*/
#include<stdio.h>
void N_Odd_natural_number_reverse_order(int num)
{
    printf("%d ",num+num-1);
    if(num!=1)
        N_Odd_natural_number_reverse_order(num-1);
    
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    N_Odd_natural_number_reverse_order(num);
    printf("\n");
    return 0;
}