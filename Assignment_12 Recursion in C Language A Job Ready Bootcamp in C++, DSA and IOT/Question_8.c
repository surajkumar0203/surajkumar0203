/*
    Question 8. Write a recursive function to print binary of a given decimal number
*/
#include<stdio.h>
void Decimal_To_Binary(int num)
{
    if(1<=num/2)
        Decimal_To_Binary(num/2);
    printf("%d",num%2);

}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    Decimal_To_Binary(num);
    printf("\n");
    return 0;
}