/*
    Question 2. Write a recursive function to calculate sum of first N odd natural numbers
*/
#include<stdio.h>
 
int Sum_Of_Odd_Natural_Num(int n)
{   
    if(n!=1)
        return Sum_Of_Odd_Natural_Num(n-1)+((n+n)-1);
    return n+n-1;
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    
    printf("Sum Of First %d Odd Natural Number Is %d \n",num,Sum_Of_Odd_Natural_Num(num));
    return 0;
}