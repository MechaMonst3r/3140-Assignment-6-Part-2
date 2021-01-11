//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Implementaion file for the derived salary and hourly employee class.
#include <iostream>
#include <string>
#include "employee.h"
#include "hourlyType.h"
#include "salaryType.h"
#include "salHourEmp.h"
using namespace std;

//Default constructor using delegation
salHourEmp :: salHourEmp()
{
 employee :: setFirstName("");
 employee :: setInitial(' ');
 employee :: setLastName("");
 salaryType :: setSalary(0);
 hourlyType :: setHoursPerMonth(0);
 hourlyType :: setFixedWage(0);
 bonus = 0;
}

//Parameterized constructor using delegation
salHourEmp :: salHourEmp(string newFirstName, char newInitial, string newLastName, double newSalary, int newHoursPerMonth, double newFixedWage)
{
 employee :: setFirstName(newFirstName);
 employee :: setInitial(newInitial);
 employee :: setLastName(newLastName);
 salaryType :: setSalary(newSalary);
 hourlyType :: setHoursPerMonth(newHoursPerMonth);
 hourlyType :: setFixedWage(newFixedWage);
 bonus = calcBonus();   
}

//Copy constructor using delegation
salHourEmp :: salHourEmp(salHourEmp& salHourEmp1)
{
 employee :: setFirstName(salHourEmp1.getFirstName());
 employee :: setInitial(salHourEmp1.getInitial());
 employee :: setLastName(salHourEmp1.getLastName());
 salaryType :: setSalary(salHourEmp1.getSalary());
 hourlyType :: setHoursPerMonth(salHourEmp1.getHoursPerMonth());
 hourlyType :: setFixedWage(salHourEmp1.getFixedWage());
 bonus = salHourEmp1.getBonus();      
}

//Destructor
salHourEmp :: ~salHourEmp(){}

//Mutators (getters and setters)
double salHourEmp :: getBonus()
{
 return bonus;   
}

void salHourEmp :: setBonus(double newBonus)
{
 bonus = newBonus;   
}

//Helper function to calculate any extra bonus if hours per month worked is greater then 18-
double salHourEmp :: calcBonus()
{
 int monthDiff = 0;
 
 //Finds the difference of hours worked if over 180
 if(getHoursPerMonth() > 180)
 {
  monthDiff = getHoursPerMonth() - 180;   
 }
 
 //Calculates the total
 double total = monthDiff * getFixedWage();
 return total;
}

//Overloads virtual print function from all inherited classes
void salHourEmp :: print()
{
  cout << "First Name: " << getFirstName() << "\n";
  cout << "Initial: " << getInitial() << "\n";
  cout << "Last Name: " << getLastName() << "\n";  
  cout << "Hours worked per month: " << getHoursPerMonth() << "\n";
  cout << "Salary: $" << getSalary() << "\n";
  cout << "Bonus pay: $" << bonus << "\n";
}