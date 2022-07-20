//Question 11, WAP to take as an input in below given format and convert the time format and 
// display the result as given below

// User Input date format- "HH:MM"

// Output Format -"HH hour and MM Minute"

// Example 
// "11:25" converted to "11 Hour and 25 Minute"

#include<stdio.h>

int main()
{
    int hour,min;
    printf("Enter Time (HH:MM)");
    scanf("%d:%d",&hour,&min);

    printf("%d Hour and %d Minute",hour,min);
    return 0;
}