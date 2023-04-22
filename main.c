// Stepwise refinement #1
#include <stdio.h>

#include "payroll.h"
#include "employee.h"
#include "fileio.h"

#define PAYROLL_FILE "payroll.txt"

int main() {
    // Display program title and developer name
   // ...

    // Initialize system
    payroll_init();
    fileio_init(PAYROLL_FILE);
    
    // Read all the payroll entries
    // ...
    employee_t emp;
    //fileio_get_employee(employee_t *employee)
    fileio_get_employee(&emp);
    printf("%s %s %c %i %c %lf", emp.firstName,
    emp.lastName, emp.gender, emp.tenure,
    emp.rate, emp.salary);
  
   // Display results
}