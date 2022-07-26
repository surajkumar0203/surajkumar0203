/*
    Question 3. Write a recursive function to print first N odd natural numbers
*/

#include<stdio.h>
void N_Odd_natural_number(int num)
{
    if(num!=1)
        N_Odd_natural_number(num-1);
    printf("%d ",num+num-1);
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    N_Odd_natural_number(num);
    printf("\n");
    return 0;
}