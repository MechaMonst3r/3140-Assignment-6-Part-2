//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Implemenation file for the base salary type class.
#include <iostream>
#include "salaryType.h"
using namespace std;

//Default constructor
salaryType :: salaryType()
{
 salary = 0;
}

//Parameterized constructor
salaryType :: salaryType(double newSalary)
{
 salary = newSalary;  
}

//Copy constructor
salaryType :: salaryType(salaryType& salaryType1)
{
 salary = salaryType1.getSalary();   
}

//Destructor
salaryType :: ~salaryType(){}

//Mutators (getters and setters)
double salaryType :: getSalary()
{
 return salary;   
}

void salaryType :: setSalary(double newSalary)
{
 salary = newSalary;  
}

//Virtual print function
void salaryType :: print()
{
 cout << "Salary: $" << salary << "\n";
}