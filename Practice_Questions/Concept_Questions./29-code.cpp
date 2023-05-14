//  W.A.P to show the concept of ambiguity in multiple inheritance. 


#include<iostream>
using namespace std;

class Class_A{
    public: 
        void func(){
            cout << "This is in Class_A " << endl;
        }
};

class Class_B{
    public:
        void func(){
            cout << "This is in Class_B " << endl;
        }
};

class Class_C:public Class_A, public Class_B{
    public:
        void func(){
            cout << "This is in Class_C " << endl;
        }
        
};

int main(void){
    Class_C obj;
    obj.func();
    obj.Class_A::func();
    obj.Class_B::func();
    obj.Class_C::func();
    return 0;
}