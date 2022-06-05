#include <iostream>

using namespace std;

int main(){

    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    ptr1 = new int;

    *ptr1 = 10;

    ptr2 = ptr1;

    delete ptr1; //otomatik olarak ptr2 de boşa çıkmış oldu.

    return 0;
}