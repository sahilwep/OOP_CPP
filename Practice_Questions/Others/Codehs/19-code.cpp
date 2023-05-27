// Implement the concept of function overloading.

#include<iostream>
using namespace std;

class Abc{
    public:
        // Function overloading
        void sum(int a, int b){
            cout << "Sum is : " << a + b  << endl;
        }
        void sum(int a, int b, int c){
            cout << "Sum is : " << a + b + c << endl;
        }
        void sum(int a, int b, int c, int d){
            cout << "Sum is : " << a + b + c + d  << endl;
        }
        void sum(int a, int b, int c, int d, int e){
            cout << "Sum is : " << a + b + + c + d + e << endl;
        }
        void sum(int a, int b, int c, int d, int e, int f){
            cout << "Sum is : " << a + b + + c + d + e + f << endl;
        }

};


int main(void){

    Abc obj;
    obj.sum(1,1);
    obj.sum(1,1,1);
    obj.sum(1,1,1,1);
    obj.sum(1,1,1,1,1);
    obj.sum(1,1,1,1,1,1);

    return 0;
}