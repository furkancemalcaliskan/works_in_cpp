#include <iostream>

using namespace std;

void degerDegistir(int &ref){


    ref = 20;


}

int main(){

    int a = 10;

    int &ref = a; //referanslar tanımlandığı yerde initialize edilmezse çalışmaz.

    ref++;


    cout << "a'nın yeni değeri: " << a << endl;

    degerDegistir(a);

    cout << "a'nın yeni değeri: " << a << endl;


    return 0;
}