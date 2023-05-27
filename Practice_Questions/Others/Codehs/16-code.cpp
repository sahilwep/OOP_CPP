// implement object as function argument.
#include<iostream>
using namespace std;

class Abc{
    private:
        int a, b;
    public:
        void set(){
            cout << "Enter the value of a & b : " ;
            cin >> a >> b;
        }
        // function with object as an argument.
        void copy(Abc obj){
            a = obj.a;
            b = obj.b;
        }
        void print(){
            cout << "The value of a & b is : " << a  << " " << b << endl ;
        }
};

int main(void){
    Abc obj;
    Abc obj2;
    obj.set();
    obj.print();

    // one use of object as argument is to copy content from one object to another.
    obj2.copy(obj);
    obj2.print();

    return 0;
}