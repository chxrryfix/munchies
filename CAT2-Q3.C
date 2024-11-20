#include <stdio.h>



int main() {

    float hoursWorked, hourlyWage;

    float grossPay, taxes, netPay;

    float regularHours, overtimeHours;

    float overtimeRate = 1.5;

    float tax1Rate = 0.15, tax2Rate = 0.20;

    float tax1Limit = 600.0;



    // Request user input for hours worked and hourly wage

    printf("Enter hours worked in a week: ");

    scanf("%f", &hoursWorked);

    printf("Enter hourly wage: ");

    scanf("%f", &hourlyWage);



    // Calculate the gross pay

    if (hoursWorked <= 40) {

        grossPay = hoursWorked * hourlyWage; // No overtime

    } else {

        regularHours = 40;

        overtimeHours = hoursWorked - 40;

        grossPay = (regularHours * hourlyWage) + (overtimeHours * hourlyWage * overtimeRate); // Overtime pay

    }



    // Calculate taxes

    if (grossPay <= tax1Limit) {

        taxes = grossPay * tax1Rate; // Tax on first $600 at 15%

    } else {

        taxes = (tax1Limit * tax1Rate) + ((grossPay - tax1Limit) * tax2Rate); // Tax on amount over $600 at 20%

    }



    // Calculate net pay

    netPay = grossPay - taxes;



    // Print the results

    printf("\nGross Pay: $%.2f\n", grossPay);

    printf("Taxes: $%.2f\n", taxes);

    printf("Net Pay: $%.2f\n", netPay);



    return 0;

}

