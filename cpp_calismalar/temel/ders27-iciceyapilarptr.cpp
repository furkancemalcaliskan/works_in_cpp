#include <iostream>

using namespace std;

    struct Address
    {
        string cityName;
        int no;
    };

    struct Employee
    {
        int id;
        string name;
        string department;
        Address* address;
    };
    
int main(){

    Employee employee1;
    employee1.id=12;
    employee1.name="hebele";
    employee1.department="hübele";

    Address address = {"İstanbul",34};

    employee1.address = &address;

    Employee* ptr = &employee1;

    cout << ptr -> address -> cityName << endl;
    cout << ptr -> address -> no << endl;




    return 0;
}