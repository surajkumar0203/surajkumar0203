/*
    Question 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
*/

#include<stdio.h>
void print_number(int x,int y)
{
    int flag;
    for(int i=x;i<=y;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}
int main()
{
    int first_index,last_index;
    printf("Enter Starting Number: ");
    scanf("%d",&first_index);
    printf("Enter Last Numbber: ");
    scanf("%d",&last_index);

    print_number(first_index,last_index);
    return 0;
}