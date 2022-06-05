#include <iostream>

using namespace std;

int main(){

/*
//int i;

for(int i = 1 ; i < 10 ; i += 2 ){


    cout << "i: " << i << endl;

}

//cout << i << endl; i'yi for döngüsünün içinde tanımlı
*/

int sayi;

cout<<"Sayı: ";
cin>>sayi;

int faktoriyel = 1;

for(int i = 1 ; i <= sayi ; i++){
    faktoriyel *= i;
}
cout << "Faktoriyel: " << faktoriyel << endl;


    return 0;
}