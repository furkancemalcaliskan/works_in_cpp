#include <iostream>

using namespace std;


int toplama(int a, int b, int c){

int toplama = a + b + c;

return toplama;
    
}

int main(){

int sayi1, sayi2, sayi3;

cout << "3 tane sayi giriniz..." << endl;
cin >> sayi1 >> sayi2 >> sayi3;
cout << endl;

cout << "Sonuç: " << toplama(sayi1,sayi2,sayi3) << endl;

    return 0;
}