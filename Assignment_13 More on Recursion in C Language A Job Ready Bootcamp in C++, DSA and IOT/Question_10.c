/*
    Question 10.  Write a program in C to calculate the power of any number using recursion.
*/
#include<stdio.h>
float power(float a,float b)
{
    if(b>0)
        return a*power(a,b-1);
    else if(b<0)
        return (1/a)*power(a,b+1);
    return 1;
}
int main()
{
    float a,b;
    printf("Enter Two Number: ");
    scanf("%f %f",&a,&b);

    printf("Power Of %.0f,%.0f is %.3f\n",a,b,power(a,b));
    
    return 0;
}