#include<string>
#include <iostream>
using namespace std;
#include "Employee.h"

void setSalary(Employee &e)
{
  switch(e.empPosition)
    {
    case 'e':
    case 'E':
      if(e.yearOfExp<2)
	e.salary=50000;
      else
	e.salary=55000;
      break;
    case 'p':
    case 'P':
      if(e.yearOfExp<4)
	e.salary=60000;
      else
	e.salary=65000;
      break;
    case 'm':
    case 'M':
      e.salary=70000;
      break;
    case 'd':
    case 'D':
      e.salary=80000;
    default: cout<<"Error in employee position input.";
    }
}

int main()
{
  Employee emp1;
  emp1.print();
  Employee emp2("unknown", 10, '?', 0);
   emp2.getInfo();
   setSalary(emp2);
    emp2.print();

  return 0;
}
