#include <stdio.h>
#include "payroll.h"

#define MAX_NUM_EMPLOYEES 10

static int num_employees = 0;
static employee_t employee[MAX_NUM_EMPLOYEES] = { 0 };