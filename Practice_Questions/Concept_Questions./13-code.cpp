// 13. W.A.P to show the concept of Virtual function.

#include<iostream>
using namespace std;

// base class
class base{
    public:
        virtual void print();
        void show();
};

void base::print(){
    cout << "This is base class print() " << endl;
}
void base::show(){
    cout << "This is base class show() " << endl;
}

// derived class

class derived:public base{
    public:
        void print();
        void show();
};

void derived::print(){
    cout << "This is derived class print() "<< endl;
}
void derived::show(){
    cout << "This is derived class show() "<< endl;
}


int main(void){
    base* obj1;
    derived obj2;

    obj1 = &obj2;

    obj1->print();
    obj1->show();

    return 0;
}