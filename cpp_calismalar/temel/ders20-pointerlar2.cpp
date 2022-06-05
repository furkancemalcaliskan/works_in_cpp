#include <iostream>

using namespace std;

int main(){

/*
    int array [] = {1,2,3,4};

    cout << array << endl; //başlangıç adresini gösterir.
    cout << array + 1 << endl; //başlangıç adresinden 4 byte farklı.
    //1 kutucuk 4 byte ediyor.


    int *ptr = array;

    cout << ptr << endl;

    cout << ptr + 1 << endl;

    ptr += ptr;

    cout << "Pointerın yeni değeri : " << ptr << endl;

    int *ptr = &array[2];

    cout << ptr << endl;
*/

    string array[] = {"Furkan","Cemal","Caliskan"};

    string *ptr = array;

    cout << ptr + 1 << endl;
    cout << *(ptr + 1) << endl; //diğer kutucuktaki değeri döndürdü, adres +4 byte arttı

    cout << ptr[1] << endl; //öncekiyle aynı ama bu daha popüler.


    return 0;   
}