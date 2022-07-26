/*
    Question 4. Write a function to find the next prime number of a given number. (TSRS)

*/

#include<stdio.h>
int next_prime(int num)
{
    int i,flag;
    num+=1;
    while(num)
    {
        i=2;
        flag=0;
        while(i<num/2)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0)
            return num;
        num++;
    }
}
int main()
{
    int a;
    printf("Find Next prime: ");
    scanf("%d",&a);

    
    printf("Next Prime Number Of %d is %d\n",a,next_prime(a));
    return 0;
}