#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee
{
  friend void setSalary(Employee &e);
 private:
  string name;
  const long officeNum;
  const long  empID;
  int  deptNum;
  char empPosition; // .E.: entry level, .M.: manager, .D.: Director, .P.:Project_leader 
  int yearOfExp;
  float salary;
  static  int totalNumOfEmployees;
  static  int nextEmpID;
  static  int nextOfficeNum;

 public:
  Employee();
  ~Employee();
  Employee(string theName, int theDeptNum, char theEmpPosition, int theYearOfExp);
  void print() const;
  void getInfo();
};
#endif
