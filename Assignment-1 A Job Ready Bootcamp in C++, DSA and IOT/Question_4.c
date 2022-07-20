//Question 4. WAP to find the area of the circle.Take radius of circle from user as input and
// print the result in below given format.

// Expected output format-"Area of circle is A having the radius R".Replace A with area
// & R with radius.
#include<stdio.h>

int main()
{
    int R;
    const float pi=3.1415;
    float A;
    printf("Enter Radius: ");
    scanf("%d",&R);
    
    A=pi*R*R;
    printf("Area of circle is %.2f having the radius %d",A,R);
    return 0;
}