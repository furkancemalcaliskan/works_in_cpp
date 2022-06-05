#include <iostream>
using namespace std;

class Matematik{
public:

static void cube(int x){
    cout << x* x* x << endl;
}
static void add2(int x){
    cout << x + 2 << endl;
}
};

int main(){

    Matematik::cube(3);
    Matematik::add2(20);



    return 0;
}