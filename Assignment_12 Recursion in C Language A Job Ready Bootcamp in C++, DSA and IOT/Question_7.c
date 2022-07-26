/*
    Question 7. Write a recursive function to print squares of first N natural numbers
*/

#include<stdio.h>
void N_Squares_natural_number(int num)
{
    if(num!=1)
        N_Squares_natural_number(num-1);
    printf("%d ",num*num);
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    N_Squares_natural_number(num);
    printf("\n");
    return 0;
}