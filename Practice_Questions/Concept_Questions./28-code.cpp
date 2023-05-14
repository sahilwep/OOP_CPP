// 28. W.A.P to show the concept of multiple inheritance. 

#include<iostream>
using namespace std;

class Class_A{
    public: 
        void SCA(){
            cout << "School of computer application " << endl;
        }
};

class Class_B{
    public:
        void CSE(){
            cout << "ferrari" << endl;
        }
};

class Class_C:public Class_A, public Class_B{
    public:
        void Bca(){
            cout << "This is BCA " << endl; 
        }
};

int main(void){
    Class_C obj;
    obj.SCA();
    obj.SCA();
    obj.Bca();

    return 0;
}