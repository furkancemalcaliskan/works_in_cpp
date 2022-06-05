#include <iostream>

using namespace std;

int main(){

string password = "yazilimbilimi";

string input;
cout << "Lutfen parolanizi giriniz... ";
cin >> input;

if (password == input){

    cout << "Parola Dogru!" << endl;

} else {

    cout << "Parola Dogru Degil!" << endl;

}

    return 0;
}