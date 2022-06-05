#include <iostream>

using namespace std;


int main(){

    string parola = "12345";
    string input;

    do {
        cout << "Parolanızı Giriniz...";
        cin >> input;
        if(input != parola){

            cout << "Parolayı yanlış girdiniz!" << endl;

        }
    }while(input != parola);

    cout << "Parola Dogru!" << endl;


    return 0;
}