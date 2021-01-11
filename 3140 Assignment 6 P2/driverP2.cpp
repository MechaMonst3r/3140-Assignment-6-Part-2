//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Driver file that tests all 3 classes and prints out each version of the virtual
//function.
#include <iostream>
#include <string>
#include "employee.h"
#include "employee.cpp"
#include "hourlyType.h"
#include "hourlyType.cpp"
#include "salaryType.h"
#include "salaryType.cpp"
#include "hourlyEmp.h"
#include "hourlyEmp.cpp"
#include "salaryEmp.h"
#include "salaryEmp.cpp"
#include "salHourEmp.h"
#include "salHourEmp.cpp"
using namespace std;

int main()
{
 //Creating objects to test.   
 hourlyEmp hourEmp("Dwight", 'K', "Shrute", 160, 26.00);
 salaryEmp salEmp("Dennis", 'B', "Dodger", 3000.00);
 salHourEmp salHoEmp("Elizabeth", 'N', "Smith", 3000.00, 185, 26.00);

 employee *pEmp = &hourEmp;

 pEmp -> print();
 cout << "\n";

 pEmp = &salEmp;
 pEmp -> print();
 cout << "\n";
 
 pEmp = &salHoEmp;
 pEmp -> print();
 return 0;   
}