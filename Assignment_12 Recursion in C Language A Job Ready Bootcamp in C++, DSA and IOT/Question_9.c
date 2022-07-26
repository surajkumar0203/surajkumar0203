/*
    Question 9. Write a recursive function to print octal of a given decimal number
*/
#include<stdio.h>
void Decimal_To_Octa(int num)
{
    if(1<=num/8)
        Decimal_To_Octa(num/8);
    printf("%d",num%8);
}
int main()
{
    int num;
    printf("Enter Number:- ");
    scanf("%d",&num);
    Decimal_To_Octa(num);
    printf("\n");
    return 0;
}