#include <iostream>

using namespace std;

void printArray(const int *ptr1, const int *ptr2){

for (int i=1; ptr1 != ptr2; ptr1++)
{
    cout << i <<". Eleman: " << *ptr1 << endl;
    i++;
}

}

int main(){

    int arr[] = {10,20,30,40,50,60,70,80,90,100};



    printArray(arr+2,arr+7);

    return 0;
}