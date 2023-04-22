#include <stdio.h>
#include "fileio.h"

static FILE *file;

// Return 0 on success or -1 on error
int fileio_init(const char *filename)
{
  file = fopen(filename, "r");
  if (!file)
  {
    perror("fopen");
    return -1;
  }
  return 0;
}

// Return 0 on success or -1 on error
int fileio_get_employee(employee_t *employee)
{
  // Howard Starr M 8 H 30.00
  // char firstName[32];
  //  char lastName[32];
  //  char gender;  //M for male, F for female, T for Third Gender
  //  int tenure;
  //  char rate; //H for hourly, W for weekly
  //  double salary;
  fscanf(file, "%s %s %c %i %c %lf", employee->firstName,
  employee->lastName, &employee->gender, &employee->tenure,
  &employee->rate, &employee->salary);
  //TODO
}