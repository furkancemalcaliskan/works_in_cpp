#include <iostream>

using namespace std;

/*void selamla(){

cout << "Naber?" << endl;
cout << "Nasılsın?" << endl;


}*/

void faktoriyel(int sayi){

    int faktoriyel = 1;

    for (int i = 25; i <= sayi; i++)
    {
        faktoriyel *= i;
    }
    
    cout << "Faktoriyel : " << faktoriyel << endl;

}

int main(){

    int sayi;
    cout << "Sayiyi giriniz..." << endl;
    cin >> sayi;

    faktoriyel(sayi);

    return 0;
}