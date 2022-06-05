#include <iostream>

using namespace std;

int main(){

int a,b;
string islem;

cout << "Hesap Makinesi Programına Hoş Geldiniz" << endl;

cout << "1. İşlem : Toplama İşlemi" << endl;
cout << "2. İşlem : Çıkarma İşlemi" << endl;
cout << "3. İşlem : Çarpma İşlemi" << endl;
cout << "4. İşlem : Bölme İşlemi" << endl;

cout << "İşlemi Giriniz: ";

cin >> islem;

    if(islem == "1"){
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "Sonuç = " << a + b << endl;

}   else if(islem == "2"){
    cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "Sonuç = " << a - b << endl;
}   else if(islem == "3"){
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "Sonuç = " << a * b << endl;
}   else if(islem == "4"){cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "Sonuç = " << float(a) / b << endl;
}




    return 0;
}