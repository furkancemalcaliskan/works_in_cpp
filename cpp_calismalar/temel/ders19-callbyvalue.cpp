#include <iostream>

using namespace std;

void degerDegistir(int *ptr){

    *ptr = 20;

    cout << "Fonksiyon içindeki değer : " << *ptr << endl;

}


int main(){

    int a = 10;
    cout << "a değişkeninin değeri : " << a << endl;
    degerDegistir(&a);
    cout << "Fonksiyon bittikten sonra a değişkeninin değeri : " << a << endl;

    return 0;
}