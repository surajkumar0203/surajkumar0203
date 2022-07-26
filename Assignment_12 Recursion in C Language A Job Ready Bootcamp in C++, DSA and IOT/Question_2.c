/*
    Question 2. Write a recursive function to print first N natural numbers in reverse order
*/
#include<stdio.h>
void N_natural_number_reverse_order(int num)
{
    printf("%d ",num);
    if(num!=1)
        N_natural_number_reverse_order(num-1);
    
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    N_natural_number_reverse_order(num);
    printf("\n");
    return 0;
}