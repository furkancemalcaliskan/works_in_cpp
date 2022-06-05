#include <iostream>

using namespace std;


int main(){

/*
or
and
not
*/

string sys_username = "mustafa_murat";
string sys_password = "123456";

string username ;
string password ;

cout << "Kullanıcı Adınızı Giriniz...";

cin >> username;

cout << "Parolanızı Giriniz...";

cin >> password;

if(sys_username == username && sys_password == password){

    cout << "Hoş Geldiniz" << endl;

}
else if(sys_username == username && sys_password == password){

    cout << "Hoş Geldiniz" << endl;

}
else if(sys_username != username && sys_password == password){
    
    cout << "Kullanıcı Adı Hatalı!" << endl;

}
else if(sys_username == username && sys_password != password){
    
    cout << "Şifre Hatalı!" << endl;

}
else if(sys_username != username && sys_password != password){
    
    cout << "Kullanıcı Adı ve Şifre Hatalı!" << endl;

}

    return 0;
}