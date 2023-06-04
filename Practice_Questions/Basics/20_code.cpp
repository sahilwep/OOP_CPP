//  W.A.P to show the concept of overloading.
// changing the number and type of parameter of same name function to achieve the function overloading.

#include <iostream>
using namespace std;

class Abc{
    public:
        void add(int a, int b){
            cout << endl << "Sum is : " << a+b;
        }
        void add(int a, int b, int c){
            cout << endl << "Sum is : " << a+b+c;
        }
        void add(int a, int b, int c, int d){
            cout << endl << "Sum is : " << a+b+c+d;
        }
        void add(int a, int b, int c, int d, int e){
            cout << endl << "Sum is : " << a+b+c+d+e;
        }
        void add(int a, int b, int c, int d, int e, int f){
            cout << endl << "Sum is : " << a+b+c+d+e+f;
        }


};

int main(void){

    Abc obj;
    obj.add(1,1);
    obj.add(1,1,1);
    obj.add(1,1,1,1);
    obj.add(1,1,1,1,1);
    obj.add(1,1,1,1,1,1);

    return 0;
}