#include <iostream>
using namespace std;

class Human{
    private:
    int id;
    string isim;
    int yas;

    public:

   /* Human(int kimlik, string name, int age){

        id = kimlik;
        isim = name;
        yas = age;

    } */
    Human(){
        this->id = 0;
        this->isim = "Bilgi Yok";
        this->yas = 0;
    }
    Human(int id){
        this->id = id;
        this->isim = "Bilgi Yok";
        this->yas = 0;
    }
    Human(int id, string isim){
        this->id = id;
        this->isim = isim;
        this->yas = 0;
    }

    Human(int id, string isim, int yas){    //değişkenler ve class değerleri aynı adı taşıyorsa "this" pointeri kullanılır
        this->id = id;
        this->isim = isim;
        this->yas = yas;
    }

    void setId(int x){
        id = x;
    }
    int getId(){
        return id;
    }
    void setYas(int z){
        if (z<0)
        {
            cout << "Böyle bir değer veremezsin" << endl;
        } else {
            
             yas = z;

        }
        
    }
    int getYas(){
        return yas;
    }
    void setIsim(string y){
        isim = y;
    }
    string getIsim(){
        return isim;
    }
    void showInfos(){
        cout << "Id: " << id << endl;
        cout << "İsim: " << isim << endl;
        cout << "Yaş: " << yas << endl;
    }
};

int main(){

/*Human Furkan;

    Furkan.setId(25);
    Furkan.setIsim("furkan");
    Furkan.setYas(21);
    cout << Furkan.getId() << endl;
    cout << Furkan.getIsim() << endl;
    cout << Furkan.getYas() << endl;
*/

    /* Human* Furkan = new Human();
    Furkan->setId(25);
    Furkan->setIsim("furkan");
    Furkan->setYas(21);

    cout << Furkan->getId() << endl;
    cout << Furkan->getIsim() << endl;
    cout << Furkan->getYas() << endl;
    */

   Human Furkan(25,"furkan",21);
   Human Furkan1(32,"hebele");
   Human Furkan2(28);
   Human Furkan3;
   
    Furkan.showInfos();
    Furkan1.showInfos();
    Furkan2.showInfos();
    Furkan3.showInfos();
    return 0;
}