//Procurement
/*
NAME : OWAYA E AUGUSTINE
REG  : CT101/G/23524/24
*/

#include <stdio.h>

int main(){
	
    float hoursWorked, hourlyWage, grossPay, taxes, netPay;
    
    // Prompt user to input values
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);
    
    // Calculate the gross pay
    if (hoursWorked <= 40) {
        grossPay = hoursWorked * hourlyWage;
    } else {
        grossPay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * 1.5);
    }
    
    // Calculate the taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }
    
    // Calculate the net pay
    netPay = grossPay - taxes;
    
    // Output the results
    printf("Gross Pay: %.2f\n", grossPay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net Pay: %.2f\n", netPay);
    
    return 0;
}