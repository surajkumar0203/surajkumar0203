/*
    Question 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
*/
#include<stdio.h>
 
int main()
{
    float USD=1;
    float INR=76.23;
    
    
    printf("Enter INR value To Convert USD: ");
    scanf("%f",&INR);
    INR=INR/76.23;
    printf("USD %.4f\n",INR);
    return 0;
}