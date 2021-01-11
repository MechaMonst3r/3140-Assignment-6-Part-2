//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the base hourly type class.
#ifndef HOURLYTYPE_DEF
#define HOURLYTYPE_DEF

class hourlyType
{
 private:
       int hoursPerMonth;
       double fixedWage, totalWage;

 public:
       hourlyType();
       hourlyType(int hoursPerMonth, double fixedWage);
       hourlyType(hourlyType& hourlyType1);
       ~hourlyType();
       int getHoursPerMonth();
       double getFixedWage();
       double getTotalWage();
       void setHoursPerMonth(int newHoursPerMonth);
       void setFixedWage(double newFixedWage);
       void setTotalWage(double newTotalWage);
       double calcTotalWage();
       virtual void print();
};
#endif