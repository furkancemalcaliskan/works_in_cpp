#include <iostream>
using namespace std;

class deneme {
    public:
    string *s;
    int *i;
    deneme(string str, int ivalue){                                       //constructor
        
        s = new string;
        i = new int;
        *s = str;
        *i = ivalue;
        cout << "Constructor Çağrıldı." << endl;
    }
    void show(){
        cout << "String Değer: " << *s << " " << "Int Değer: " << *i << endl;
    }
    ~deneme(){                                      //deconstructor
        delete s;
        delete i;
        cout << "Deconstructor Çağrıldı." << endl;
    }
};

int main(){

    deneme *emp = new deneme("Furkan",21);
    emp->show();

    delete emp;




    return 0;
}