/*
    Question 1. Write a function to calculate the area of a circle.(TSRS)
*/
#include<stdio.h>

float area_of_circle(int r)
{
    const float pi=3.1415;
    return pi*r*r;
}

int main()
{
    int r;
    printf("Enter Radius: ");
    scanf("%d",&r);
    float result=area_of_circle(r);
    printf("area of circle is %.2f",result);
    return 0;
}