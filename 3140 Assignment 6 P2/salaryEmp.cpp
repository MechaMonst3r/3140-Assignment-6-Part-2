//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Implementation file for the derived salary employee class.
#include <iostream>
#include <string>
#include "employee.h"
#include "salaryType.h"
#include "salaryEmp.h"
using namespace std;

//Default constructor using delegation
salaryEmp :: salaryEmp()
{
  employee :: setFirstName("");
  employee :: setInitial(' ');
  employee :: setLastName("");
  salaryType :: setSalary(0); 
}

//Parameterized constructor using delegation
salaryEmp :: salaryEmp(string newFirstName, char newInitial, string newLastName, double newSalary)
{
  employee :: setFirstName(newFirstName);
  employee :: setInitial(newInitial);
  employee :: setLastName(newLastName);
  salaryType :: setSalary(newSalary);  
}

//Copy constructor using delegation
salaryEmp :: salaryEmp(salaryEmp& salaryEmp1)
{
  employee :: setFirstName(salaryEmp1.getFirstName());
  employee :: setInitial(salaryEmp1.getInitial());
  employee :: setLastName(salaryEmp1.getLastName());
  salaryType :: setSalary(salaryEmp1.getSalary());   
}

//Destructor
salaryEmp :: ~salaryEmp(){}

//Overloads virtual print function from both inherited classes
void salaryEmp :: print()
{
  cout << "First Name: " << getFirstName() << "\n";
  cout << "Initial: " << getInitial() << "\n";
  cout << "Last Name: " << getLastName() << "\n";
  cout << "Salary: $" << getSalary() << "\n";
}