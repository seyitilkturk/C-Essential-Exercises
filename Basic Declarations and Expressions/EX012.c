#include <stdio.h>

int main()
{

    int empID, workhours, salaryhours;
    float salary;

    printf("Please type your Employee ID number: \n");
    scanf("%d", &empID);

    printf("Please type total worked hours: \n");
    scanf("%d", &workhours);

    printf("Please type salary per hour: \n");
    scanf("%d", &salaryhours);

    salary = workhours * salaryhours;

    printf("Employees ID = %d. \n", empID);
    printf("Salary = $ %.2f \n", salary);

return 0;
}
