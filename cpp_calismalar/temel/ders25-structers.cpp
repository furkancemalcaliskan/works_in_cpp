#include <iostream>

using namespace std;

struct Employee {

    int id;
    string name;
    string department;

};

void showEmployee(Employee employee){
    employee.id = 40;
    cout << "Id: " << employee.id <<endl;
    cout << "Name: " << employee.name <<endl;
    cout << "Department: " << employee.department <<endl;

}

void show(Employee* employee){
    employee -> id = 40;
    cout << "Id: " << employee -> id <<endl;
    cout << "Name: " << employee -> name <<endl;
    cout << "Department: " << employee -> department <<endl;

}

int main(){


    Employee employee1 = {12,"Furkan","student"};

    /* cout << employee1.name << endl;

    employee1.name = "dejkoveci";

    cout << employee1.name << endl;

    employee1.id = 31;
    employee1.name = "dütdüt";
    employee1.department = "bohohoyt";

    cout << employee1.id << endl;
    cout << employee1.name << endl;
    cout << employee1.department << endl;


    Employee* ptr= &employee1;

    cout << ptr -> department << endl;
    */

    show(&employee1);
    showEmployee(employee1);

    return 0;
}