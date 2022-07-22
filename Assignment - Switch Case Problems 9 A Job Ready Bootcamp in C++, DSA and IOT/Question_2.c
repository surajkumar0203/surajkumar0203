/*
    Write a menu driven program with the following options:
    a. Addition
    b. Subtraction
    c. Multiplication
    d. Division
    e. Exit
*/
#include<stdio.h>

#include<stdlib.h>
int main()
{
    int x,y;
    float a,b;
    char ch;
    while (1)
    {
        fflush(stdin);
        printf("\n\t MENU \n");
        printf("a.Addition\n");
        printf("b.Subtraction\n");
        printf("c.Multiplication\n");
        printf("d.Division\n");
        printf("e.Exit\n");
        printf("Enter Your Choice:- ");
        scanf("%c",&ch);
        
       
        
        switch(ch)
        {
            case 'a' :
                printf("\n");

                printf("\tAddition\n");

                printf("Enter First Number:= ");
                scanf("%d",&x);

                printf("Enter Second Number:= ");
                scanf("%d",&y);

                printf("%d + %d = %d\n",x,y,x+y);
                break;
            case 'b':
                printf("\n");
                printf("\tSubstract\n");
                
                printf("Enter First Number:= ");
                scanf("%d",&x);
                
                printf("Enter Second Number:= ");
                scanf("%d",&y);
                
                printf("%d - %d = %d\n",x,y,x-y);
                break;
            case 'c':
                printf("\n");
                printf("\tMultipilication\n");
                
                printf("Enter First Number:= ");
                scanf("%d",&x);
                
                printf("Enter Second Number:= ");
                scanf("%d",&y);
                
                printf("%d * %d = %d\n",x,y,x*y);
                break;
            case 'd':
                printf("\n");
                printf("\tDivision\n");
                
                printf("Enter First Number:= ");
                scanf("%f",&a);
                
                printf("Enter Second Number:= ");
                scanf("%f",&b);
                
                printf("%.0f / %.0f = %.2f\n",a,b,a/b);
                break;
            case 'e':
                exit(0);
            
            default:
                printf("Invalid Input");
            
        }
    }
    return 0;
}