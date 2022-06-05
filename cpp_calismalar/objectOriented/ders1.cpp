#include <iostream>

using namespace std;

class Student{

public:

    string name;


};




int main(){


    Student student1;
    Student student2;

    student1.name = "Furkan Cemal";
    student2.name = "Yasin Batu";

    cout << "Öğrenci 1 İsmi: " << student1.name << endl;
    cout << "Öğrenci 2 İsmi: " << student2.name << endl;


    return 0;
}