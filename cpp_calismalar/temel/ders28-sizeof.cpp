#include <iostream>

using namespace std;

struct Student
{
    int id;
    char letter;
};


int main (){

    cout << "Integer: " << sizeof(int) << endl;
    cout << "Character: " << sizeof(char) << endl;
    cout << "Double: " << sizeof(double) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Student: " << sizeof(Student) << endl;



    return 0;
}