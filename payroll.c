#include <stdio.h>
#include "payroll.h"

#define MAX_NUM_EMPLOYEES 10

static int num_employees = 0;
static employee_t employee[MAX_NUM_EMPLOYEES] = { 0 };

 Return 0 on success or -1 on error
int payroll_init()
{
  return 0;
}

// Return 0 on success or -1 on error 
int payroll_add(employee_t *employee)
{
  employee[num_employees] = *employee;
  num_employees++;
  //TODO - handle case of array overflow
  return 0;
}

// Return number of employees
int payroll_get_num_employees()
{
  return num_employees;
}

// Return number of employees based on gender
// Input param c is M, F, or T
int payroll_get_num_employees_by_gender(char c)
{
  //TODO
  return 0;
}

// Print info about all employee info, going from first to last
void payroll_print_first_to_last()
{
  //TODO
}
// Print info about all employee info, going from last to first
void payroll_print_last_to_first()
{
  //TODO
}