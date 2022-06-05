#include <iostream>

using namespace std;


int main(){

int islem;

cout << "islemi giriniz...";

cin >> islem;

cout << "islem: " << islem <<endl;

switch (islem)
{
case 1:
    cout << "1. islemi sectiniz." << endl;    
    break;

case 2:
    cout << "2. islemi sectiniz." << endl;    

    break;

case 3:
    cout << "3. islemi sectiniz." << endl;    

    break;

default:
    cout << "Gecersiz islem!" << endl;    

    break;
}

    //case'lerde break koymazsak diğer break görene kadar alttaki bütün caseleri çalıştırır.

    return 0;
}