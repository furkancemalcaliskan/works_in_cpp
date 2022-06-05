#include <iostream>
using namespace std;

class deneme{
private:
    string isim;
    int yas;
    int maas;
public:
deneme(string isim, int yas, int maas){
    this->isim = isim;
    this->yas = yas;
    this->maas = maas;
}
friend void show(deneme deneme1);
};

void show(deneme deneme1){
    cout << deneme1.isim << " " << deneme1.yas << " " << deneme1.maas << endl;
}

int main(){

    deneme deneme1("furkan",21,0);
    show(deneme1);


    return 0;
}