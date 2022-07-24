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

    switch(units<=50)
    {
        case 1:
            charges=units*0.50;
            break;
        case 0:
            switch(units<=150)
            {
                case 1:
                    charges=25+(units-50)*0.75;
                    break;
                case 0:
                    switch(units<=250)
                    {
                        case 1:
                            charges=100+(units-150)*1.20;
                            break;
                        case 0:
                            charges=220+(units-250)*1.50;
                            break;
                    }
                break;
            }
        break;
            

    }
    
    float survice_charge=charges*0.20;

    float total=charges+survice_charge;
    
    printf("Charge: %.2f\n",charges);
    printf("Survice Charge: %.2f\n",survice_charge);
    printf("Total electricity bill %.2f\n",total);
    return 0;
}
