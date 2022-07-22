/*
Question 7.
    Program to take the value from the user as input electricity unit charges
    and calculate total electricity bill according to the given condition . Using
    the switch statement.
        For the first 50 units Rs. 0.50/unit
        For the next 100 units Rs. 0.75/unit
        For the next 100 units Rs. 1.20/unit
        For units above 250 Rs. 1.50/unit
        An additional surcharge of 20% is added to the bill.

*/

#include<stdio.h>

int main()
{
    int units;
    float charges;
    printf("Enter electricity unit Charges: ");
    scanf("%d",&units);

    switch(units)
    {
        case 50 ... 99:
            charges=0.50*units;
            break;
        case 100 ... 199:
            charges=0.75*units;
            break;
        case 200 ... 249:
            charges=1.20*units;
            break;
        default:
            charges=1.50*units;
    }
    
    float survice_charge=(120*charges)/100;
    
    printf("electricity bill %0.2f\n",charges);
    charges+=survice_charge;
    printf("Survice Charge 20%% %.3f\n",survice_charge);
    printf("Total %0.2f\n",charges);
    
    return 0;
}