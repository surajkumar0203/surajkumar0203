/*
    Write a recursive function to calculate sum of first N natural numbers
*/
#include<stdio.h>
int Sum_Of_Natural_Num(int n)
{   
    if(n!=1)
        return Sum_Of_Natural_Num(n-1)+n;
    return n;
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    
    printf("Sum Of First %d Natural Number Is %d \n",num,Sum_Of_Natural_Num(num));
    return 0;
}