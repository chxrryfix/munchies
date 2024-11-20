#include<stdio.h>

#include<string.h>



struct employee{

char name [25];

int id;

char department [20];

float salary;

char email [50];

} employee;



int main()

{

strcpy(employee.name,"John Doe");

employee.id = 12345;

strcpy(employee.department,"Human Resources");

employee.salary = 55000.50;

strcpy(employee.email,"john.doe@compant.com");



printf("Email: %s \n", employee.email);

printf("Id: %d \n", employee.id);

printf("Department: %s \n", employee.department);

printf("Salary: %f \n", employee.salary);



return 0;

}