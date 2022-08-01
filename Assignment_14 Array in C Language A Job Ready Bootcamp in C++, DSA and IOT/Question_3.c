/*
    Question 3. 
    Write a program to calculate the sum of all even numbers and sum of all odd
    numbers, which are stored in an array of size 10. Take array values from the user.
*/

#include<stdio.h>
 
int main()
{
    int array[10],even_sum=0,odd_sum=0;
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d Number: ",i+1);
        scanf("%d",&array[i]);
    }

    for(i=0;i<10;i++)
    {
        if(array[i]&1)
            odd_sum+=array[i];
        else
            even_sum+=array[i];
    }
    printf("Sum of all even number in array %d\n",even_sum);
    printf("Sum of all odd number in array %d\n",odd_sum);
    return 0;
}