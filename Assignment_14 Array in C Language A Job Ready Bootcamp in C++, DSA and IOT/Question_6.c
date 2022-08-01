/*
    Question 6. 

    Write a program to sort elements of an array of size 10. Take array values from the
    user
*/

#include<stdio.h>
 
int main()
{
    int array[10];
    int i,flag=1;
    for(i=0;i<10;i++)
    {
        printf("%d Number: ",i+1);
        scanf("%d",&array[i]);
    }
    // print array
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    // Sort array
    for(i=0;i<10;i++)
    {
        for(int j=0;j<10-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=0;
            }
        }
        if(flag)
            break;
    }
    // print array after sort.
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
