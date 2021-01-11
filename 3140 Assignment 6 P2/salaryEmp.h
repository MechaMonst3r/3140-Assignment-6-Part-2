//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the derived salary employee class.
#ifndef SALARYEMP_DEF
#define SALARYEMP_DEF
#include <string>
#include "salaryType.h"
#include "employee.h"
using namespace std;

class salaryEmp : public employee, public salaryType
{
 public:
     salaryEmp();
     salaryEmp(string newFirstName, char newInitial, string newLastName, double newSalary);
     salaryEmp(salaryEmp& salaryEmp1);
     ~salaryEmp();
     void print();
};
#endif