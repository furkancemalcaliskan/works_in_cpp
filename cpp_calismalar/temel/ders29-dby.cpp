//dinamik bellek yönetimi

#include <iostream>

using namespace std;

int main(){

    int *ptr = new int; //bir tane integer kadar yer ayır.

    *ptr = 5;

    delete ptr;

    /*int *ptr;

    int a[] = {1,2,3,4,5};

    ptr = a;

    cout << ptr[1] << endl; */

    return 0;
}