/*
    Question 10. Write a recursive function to print reverse of a given number
*/

#include<stdio.h>
void reverse_number(int num)
{
    if(num!=0)
    {
        printf("%d",num%10);
        reverse_number(num/10);
    }
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    reverse_number(num);
    printf("\n");
    return 0;
}