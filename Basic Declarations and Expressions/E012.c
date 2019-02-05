#include <stdio.h>

int main(){

    int id, hours, salary, totalSalary;

    printf("\n\nPlease enter employee ID: ");
    scanf(" %d", &id);
    printf("Please enter the working hours: ");
    scanf(" %d", &hours);
    printf("Please enter the salary per hour: ");
    scanf(" %d", &salary);

    totalSalary = hours * salary;

    printf("\nTOTAL SALARY of Employee #%d: $%d\n\n", id, totalSalary);


    return 0;
}
