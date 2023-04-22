#ifndef __FILEIO_H__
#define __FILEIO_H__

#include "employee.h"

// Return 0 on success or -1 on error
int fileio_init(const char *filename);

// Return 0 on success or -1 on error
int fileio_get_employee(employee_t *employee);

#endif