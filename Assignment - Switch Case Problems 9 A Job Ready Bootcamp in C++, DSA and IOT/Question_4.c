/*
    Write a menu driven program with the following options:
        a. Check whether a given set of three numbers are lengths of an
        isosceles triangle or not
        b. Check whether a given set of three numbers are lengths of sides of
        a right angled triangle or not
        c. Check whether a given set of three numbers are equilateral triangle
        or not
        d. Exit
*/

#include<stdio.h>

int main()
{
    int x,y;
    float a,b;
    char ch;
    int side1,side2,side3;
    while (1)
    {
        fflush(stdin);
        printf("\n\t MENU \n");
        printf("a.Check isosceles triangle or not\n");
        printf("b.Check right angle triangle or not\n");
        printf("c.Check  equilateral triangle or not\n");
        printf("d.Exit\n");
        printf("Enter Your Choice:- ");
        scanf("%c",&ch);
        
       
        
        switch(ch)
        {
            case 'a' :
                printf("\n");
                
                printf("\tcheck isosceles triangle or not\n");

                printf("Enter three value:");
                scanf("%d%d%d",&side1,&side2,&side3);

                if(side1==side2 || side2==side3 || side3==side1)
                    printf("Triangle is Isosceles triangle\n");
                else
                    printf("Triangle is not Isosceles triangle\n");
                break;
            case 'b':
                printf("\n");
                printf("\tSubstract\n");
                
                printf("Enter three value:");
                scanf("%d%d%d",&side1,&side2,&side3);
                
                if((side1*side1==side2*side2+side3*side3) || (side2*side2==side3*side3+side1*side1) 
                    || (side3*side3==side1*side1+side2*side2))

                    printf("Triangle is Right angle triangle\n");

                else
                    printf("Triangle is not Right angle triangle\n");
                break;
            case 'c':
                printf("\n");
                printf("\tCheck  equilateral triangle or not\n");

                printf("Enter three value:");
                scanf("%d%d%d",&side1,&side2,&side3);

                if(side1==side2 && side2==side3)
                    printf("Triangle is equilateral triangle\n");
                else
                    printf("Triangle is not equilateral triangle\n");
                break;
                
            case 'd':
                return 0;
            
            default:
                printf("Invalid Input");
            
        }
    }
}