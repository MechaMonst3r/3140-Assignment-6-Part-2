//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the derived salary and hourly employee class.
#ifndef SALHOUREMP_DEF
#define SALHOUREMP_DEF
#include <string>
#include "employee.h"
#include "hourlyType.h"
#include "salaryType.h"
using namespace std;

class salHourEmp : public employee, public salaryType, public hourlyType
{
 private:
      double bonus;

 public:
      salHourEmp();
      salHourEmp(string newFirstName, char newInitial, string newLastName, double newSalary, int newHoursPerMonth, double newFixedWage);
      salHourEmp(salHourEmp& salHourEmp1);
      ~salHourEmp();
      double getBonus();
      void setBonus(double newBonus);
      double calcBonus();
      void print();     
};
#endif