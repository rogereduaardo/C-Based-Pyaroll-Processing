#ifndef __PAYROLL_H_
#define __PAYROLL_H_

#include "emplyee.h"

/ Return 0 on success or -1 on error
int payroll_init();

// Return 0 on success or -1 on error 
int payroll_add(employee_t *employee);

// Return number of employees
int payroll_get_num_employees()

// Return number of employees based on gender
// Input param c is M, F, or T
int payroll_get_num_employees_by_gender(char c);

// Print info about all employee info, going from first to last
void payroll_print_first_to_last();
// Print info about all employee info, going from last to first
void payroll_print_last_to_first();

#endif