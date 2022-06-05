#include <iostream>

using namespace std;

int main(){

   /* int array[3]; //array tanımlandı

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

cout << "0. index: "<< array[0]<<endl;
cout << "1. index: "<< array[1]<<endl;
cout << "2. index: "<< array[2]<<endl;
*/

//int array[] = {10,20,30,40};

double array2[] = {1.2,3.5,4.6,7.6};

/*for (int i = 0; i < 4; i++)
{
    cout <<i<<". index değeri: "<<array2[i]<<endl;
}


cout << array2[4] << endl; //4. indexte değer yok!!!
*/

string array3[4];

for (int i = 0; i < 4; i++)
{
    cin >> array3[i];
}
for (int i = 0; i < 4; i++)
{
    cout << i << ". index değeri: " << array3[i]<<endl;
}










    return 0;
}