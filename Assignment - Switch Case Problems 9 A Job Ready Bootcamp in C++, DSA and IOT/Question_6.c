/*
  Question 6.  Program to check whether a year is a leap year or not. Using switch
    statement
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d",&year);

    switch(year%400==0)
    {
        case 1:
            printf("%d is a leap year\n",year);
            break;
        case 0:
            switch(year%100==0)
            {
                case 1:
                    printf("%d is not a leap year\n",year);
                    break;
                case 0:
                    switch(year%4==0)
                    {
                        case 1:
                            printf("%d is a leap year\n",year);
                            break;
                        case 0:
                            printf("%d is not a leap year\n",year);
                            break;
                    }
                    break;
            }
            break;
    }
    return 0;
}