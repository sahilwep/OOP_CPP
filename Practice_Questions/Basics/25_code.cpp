// W.A.P to show the concept of Copy constructor.

#include <iostream>
using namespace std;


class Abc{
    private:
        int a;
    public:
        void input(){
            cout << endl << "Enter the no : ";
            cin >> a;
        }
        Abc(){};
        Abc(Abc &obj){
            a =  obj.a + 1;
        }
        void print(){
            cout << "The value is : " << a;
        }

};

int main(void){
    Abc obj_;
    obj_.input();
    
    Abc obj_1(obj_);
    obj_1.print();


    return 0;
}