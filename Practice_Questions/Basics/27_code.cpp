// W.A.P to show the concept of constructor overloading.

#include <iostream>
using namespace std;

class add{
    public:
        add(int a, int b){
            cout << endl << "Sum is : " << a+b;
        }
        add(int a, int b, int c){
            cout << endl << "Sum is : " << a+b+c;
        }
        add(int a, int b, int c, int d){
            cout << endl << "Sum is : " << a+b+c+d;
        }
        add(int a, int b, int c, int d, int e){
            cout << endl << "Sum is : " << a+b+c+d+e;
        }
        add(int a, int b, int c, int d, int e, int f){
            cout << endl << "Sum is : " << a+b+c+d+e+f;
        }
};


int main(void){

    add obj_1(1,1);
    add obj_2(1,1,1);
    add obj_3(1,1,1,1);
    add obj_4(1,1,1,1,1);
    add obj_5(1,1,1,1,1,1);

    return 0;
}