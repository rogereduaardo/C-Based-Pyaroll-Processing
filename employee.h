#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

typedef struct 
{
    char firstName[32];
    char lastName[32];
    char gender;  //M for male, F for female, T for Third Gender
    int tenure;
    char rate; //H for hourly, W for weekly
    double salary;
}

employee_t;

#endif