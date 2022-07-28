/*
    Question 10. . Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)

*/

#include<stdio.h>
 
int main()
{
    int var=2345;
    var/=10;
    var*=10;
    printf("%d\n",var);
    return 0;
}