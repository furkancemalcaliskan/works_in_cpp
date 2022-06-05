#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <iostream>

using namespace std;

class Employee
{
public:
    string name;
    int id;
    int salary;

    void showInfos(); // Bu metod bilgileri ekrana yazar.
};

#endif

