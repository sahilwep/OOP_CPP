#include<iostream>
using namespace std;

class Abc{
    public:
        // constructor overloading
        Abc(int a, int b){
            cout << "Sum is : " << a + b  << endl;
        }
        Abc(int a, int b, int c){
            cout << "Sum is : " << a + b + c << endl;
        }
        Abc(int a, int b, int c, int d){
            cout << "Sum is : " << a + b + c + d  << endl;
        }
        Abc(int a, int b, int c, int d, int e){
            cout << "Sum is : " << a + b + + c + d + e << endl;
        }
        Abc(int a, int b, int c, int d, int e, int f){
            cout << "Sum is : " << a + b + + c + d + e + f << endl;
        }

};


int main(void){

    Abc obj(1,1);
    Abc obj1(1,1,1);
    Abc obj2(1,1,1,1);
    Abc obj3(1,1,1,1,1);
    Abc obj4(1,1,1,1,1,1);

    return 0;
}