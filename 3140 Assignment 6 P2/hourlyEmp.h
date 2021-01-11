//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the derived hourly employee class.
#ifndef HOURLYEMP_DEF
#define HOURLYEMP_DEF
#include "employee.h"
#include "hourlyType.h"
#include <string>
using namespace std;

class hourlyEmp : public employee, public hourlyType
{
 public:
     hourlyEmp();
     hourlyEmp(string newFirstName, char newInitial, string newLastName, int newHoursPerMonth, double newFixedWage);
     hourlyEmp(hourlyEmp& hourlyEmp1);
     ~hourlyEmp();
     void print();
};
#endif