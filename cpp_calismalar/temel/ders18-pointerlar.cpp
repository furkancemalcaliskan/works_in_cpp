#include <iostream>

using namespace std;

int main(){

    int a = 5;

    int *ptr = &a;

    cout << "Değişkenin Adresi : " << &a << endl;
    cout << "Değişkenin Adresi : " << ptr << endl;

    cout << "Değişkenin Değeri : " << *ptr << endl;

    *ptr = 6;

    cout << "Değişkenin Yeni Değeri : " << a << endl;


    return 0;
}