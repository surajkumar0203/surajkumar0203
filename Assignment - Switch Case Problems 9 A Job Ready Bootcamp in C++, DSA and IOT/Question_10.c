/*
    Question 10. C program to find all roots of a quadratic equation using switch case

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);

    D=b*b-4*a*c;
    
    switch(D)
    {
        case 0:
        
            printf("Both roots are equal\n");
            x=-b/(float)(2*a);
            printf("Roots is %.3f\n",x);
            break;
        
        case 1:
            printf("Roots are real and distinct\n");
            x=(-b+sqrt(D))/(2*a);
            y=(-b-sqrt(D))/(2*a);
            printf("Roots are: %.3f %.3f\n",x,y);
            break;
        default:
            printf("Both roots are Imaginary\n");

    }

    return 0;
}