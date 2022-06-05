#include <iostream>

using namespace std;


int main(){

/*
Break: Döngü anında sona erer.
Continue: Döngü altındaki komutlar çalışmadan başa döner

//break:

int i = 0;

while(i<10){

    if(i==5){
        break;
    }
    cout <<"i: "<<i<<endl;
    i++;
}
//if koşulu sağlandığında döngü sonlandı.
*/

/*
continue:

for(int i = 0; i < 10; i++){
    if(i == 3 || i == 5){
        continue;
    }
    cout <<"i: "<<i<< endl;
}
*/
/*
    int i=0;

    while (i<10)
    {
        if (i == 3 || i == 5)
        {
            i++; //continue'dan önce arttırmazsak program sonsuz döngüye girer.
            continue;
        }
        cout<<"i: "<<i<<endl;
        i++;
    }
*/

string sys_username = "furkancemal";
string sys_password = "12345";

string username;
string password;

while (true) {
    cout << "Kullanıcı Adınızı giriniz...";
    cin >> username;
    cout << "Şifreniz...";
    cin >> password;
    if (username == sys_username && password == sys_password)
    {
        cout << "Hoş Geldiniz!" << endl;
        break;
    }else if (username != sys_username && password == sys_password){
        cout << "Kullanıcı Adı Hatalı!" << endl;
    }else if (username == sys_username && password != sys_password){
        cout << "Şifre Hatalı!" << endl;
    }else if (username != sys_username && password != sys_password){
        cout << "Kullanıcı Adı ve Şifre Hatalı!" << endl;
    }
   
    
    
}











    return 0;
}