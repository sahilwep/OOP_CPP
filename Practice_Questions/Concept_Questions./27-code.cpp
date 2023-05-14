// 27. W.A.P to show the concept of Single inheritance. 

#include<iostream>
using namespace std;

class Base{
    public: 
        void func(){
            cout << "base class function called" << endl;
        }
};

class Derived:public Base{
    public:
        void func(){
            cout << "derived class function called" << endl;
        }
};

int main(void){
    Derived obj;
    obj.Base::func();
    obj.func();

    return 0;
}