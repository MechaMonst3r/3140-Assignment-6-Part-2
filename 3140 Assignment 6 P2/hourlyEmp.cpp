//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the derived hourly employee class.
#include <iostream>
#include <string>
#include "employee.h"
#include "hourlyType.h"
#include "hourlyEmp.h"
using namespace std;

//Default constructor using delegation
hourlyEmp :: hourlyEmp()
{
 employee :: setFirstName("");
 employee :: setInitial(' ');
 employee :: setLastName("");
 hourlyType :: setHoursPerMonth(0);
 hourlyType :: setFixedWage(0);
 hourlyType :: setTotalWage(calcTotalWage());
}

//Parameterized constructor using delegation
hourlyEmp :: hourlyEmp(string newFirstName, char newInitial, string newLastName, int newHoursPerMonth, double newFixedWage)
{
 employee :: setFirstName(newFirstName);
 employee :: setInitial(newInitial);
 employee :: setLastName(newLastName);
 hourlyType :: setHoursPerMonth(newHoursPerMonth);
 hourlyType :: setFixedWage(newFixedWage);
 hourlyType :: setTotalWage(calcTotalWage());  
}

//Copy constructor using delegation
hourlyEmp :: hourlyEmp(hourlyEmp& hourlyEmp1)
{
 employee :: setFirstName(hourlyEmp1.getFirstName());
 employee :: setInitial(hourlyEmp1.getInitial());
 employee :: setLastName(hourlyEmp1.getLastName());
 hourlyType :: setHoursPerMonth(hourlyEmp1.getHoursPerMonth());
 hourlyType :: setFixedWage(hourlyEmp1.getFixedWage());
 hourlyType :: setTotalWage(hourlyEmp1.getTotalWage());   
}

//Destructor
hourlyEmp :: ~hourlyEmp(){}

//Overloads virtual print function from both inherited classes
void hourlyEmp :: print()
{
  cout << "First Name: " << getFirstName() << "\n";
  cout << "Initial: " << getInitial() << "\n";
  cout << "Last Name: " << getLastName() << "\n";  
  cout << "Hours worked per month: " << getHoursPerMonth() << "\n";
  cout << "Wage earned: $" << getFixedWage() << "\n";
  cout << "Total earned per month: $" << getTotalWage() << "\n";
}


