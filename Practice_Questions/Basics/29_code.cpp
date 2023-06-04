#include <iostream>
using namespace std;

class Abc{

    public:
        Abc(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0){
            cout << endl << "Sum is : " << a+b+c+d+e;
        }

};


int main(void){

    Abc obj_1(1,1);
    Abc obj_2(1,1,1);
    Abc obj_3(1,1,1,1);
    return 0;

}