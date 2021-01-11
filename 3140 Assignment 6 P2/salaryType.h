//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the base salary type class.
#ifndef SALARYTYPE_DEF
#define SALARYTYPE_DEF

class salaryType
{
 private:
      double salary;

 public:
      salaryType();
      salaryType(double newSalary);
      salaryType(salaryType& salaryType1);
      ~salaryType();
      double getSalary();
      void setSalary(double newSalary);
      virtual void print();
};

#endif