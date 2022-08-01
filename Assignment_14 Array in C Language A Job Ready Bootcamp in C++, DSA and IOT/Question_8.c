/*
    Question 8.
        Write a program to find the second smallest number in an array.Take array values
    from the user.
*/

#include<stdio.h>
 
int main()
{
    int array[10];
    int i,n=10;
    
    for(i=0;i<n;i++)
    {
        printf("%d Number: ",i+1);
        scanf("%d",&array[i]);
    }
    /*
        sort the array
    */
    int flag=0;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
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

    /*
        find second smallest element in array after sort
    */
    int max=array[0];
    for(i=1;i<n;i++)
    {
        if(max!=array[i])
        {
            max=array[i];
            break;
        }
    }
    printf("second smallest %d: \n",max);
    return 0;
}