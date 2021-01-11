
//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Implementation file for the base hourly type class.
#include <iostream>
#include "hourlyType.h"
using namespace std;

//Default constructor
hourlyType :: hourlyType()
{
  hoursPerMonth = 0;
  fixedWage = 0;
  totalWage = 0;
}

//Parameterized constructor
hourlyType :: hourlyType(int newHoursPerMonth, double newFixedWage)
{
 hoursPerMonth = newHoursPerMonth;
 fixedWage = newFixedWage;
 totalWage = calcTotalWage();
}

//Copy constructor
hourlyType :: hourlyType(hourlyType& hourlyType1)
{
 hoursPerMonth = hourlyType1.getHoursPerMonth();
 fixedWage = hourlyType1.getFixedWage();
 totalWage = hourlyType1.getTotalWage();
}

//Destructor
hourlyType :: ~hourlyType(){}

//Mutators (getters and setters)
int hourlyType :: getHoursPerMonth()
{
 return hoursPerMonth;   
}

double hourlyType :: getFixedWage()
{
 return fixedWage;   
}

double hourlyType :: getTotalWage()
{
 return totalWage;  
}

void hourlyType :: setHoursPerMonth(int newHoursPerMonth)
{
 hoursPerMonth = newHoursPerMonth;   
}

void hourlyType :: setFixedWage(double newFixedWage)
{
 fixedWage = newFixedWage;   
}

void hourlyType :: setTotalWage(double newTotalWage)
{
 totalWage = newTotalWage;   
}

//Helper function to calculate total wage based on hours worked in a month and wage
double hourlyType :: calcTotalWage()
{
  double total = hoursPerMonth * fixedWage;
  return total;  
}

//Virtual print function
void hourlyType :: print()
{
 cout << "Hours Per Month: " << hoursPerMonth << "\n";
 cout << "Fixed Wage: $" << fixedWage << "\n";
 cout << "Total Wage: $" << totalWage << "\n";
}