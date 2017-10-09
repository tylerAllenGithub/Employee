#ifndef EMPLOYEE_C
#define EMPLOYEE_C

#include <string>
#include <iostream>
using namespace std;

#include "Employee.h"

int Employee::totalNumOfEmployees=0;
int Employee::nextEmpID=1000;
int Employee::nextOfficeNum=10;

Employee::Employee():officeNum(nextOfficeNum), empID(nextEmpID)
{
  name="Unknown";
  deptNum=0;
  empPosition='E';
  yearOfExp=0;
  salary=0.0;
  totalNumOfEmployees++;
  nextEmpID++;
  nextOfficeNum++;
}

Employee::~Employee()
{
  totalNumOfEmployees--;
}

Employee::Employee(string theName, int theDeptNum, char theEmpPosition, int theYearOfExp):officeNum(nextOfficeNum), empID(nextEmpID)
{
  name=theName;
  deptNum=theDeptNum;
  empPosition=theEmpPosition;
  yearOfExp=theYearOfExp;
  salary=0.0;
  totalNumOfEmployees++;
  nextEmpID++;
  nextOfficeNum++;
}

void Employee::print() const
{
  cout<<"Employee name is "<<name<<endl;
  cout<<"Office Number is "<<officeNum<<endl;
  cout<<"Employee ID is "<<empID<<endl;
  cout<<"Department Number is "<<deptNum<<endl;
  cout<<"Employee position is "<<empPosition<<endl;
  cout<<"The Number of years of Experience are "<<yearOfExp<<endl;
  cout<<"The salary is "<<salary<<endl;
  cout<<endl<<"The Total Numbers of Employees is "<<totalNumOfEmployees<<endl;
  cout<<"The next employee ID is "<<nextEmpID<<endl;
  cout<<"The next Office number is "<<nextOfficeNum<<endl;
}

void Employee::getInfo()
{
  cout<<"Enter your name: ";
  getline(cin, name);
  cout<<"(E for entry level, M for manager, D for Director, P for Project Leader)"<<endl;
  cout<<"Enter your current position: ";
  cin>>empPosition;
  cout<<"Enter your years of experience: ";
  cin>>yearOfExp;
}

 
#endif
