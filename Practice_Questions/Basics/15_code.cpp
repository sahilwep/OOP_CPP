// W.A.P to swap two numbers using third variable with class.

#include <iostream>
using namespace std;


class Abc{
    private:
        int a,b,temp;
    public:
    void input();
    void swap();
    void print();
};

void Abc::input(){
    cout << endl << "Enter the value of A & B : ";
    cin >> a >> b;
}

void Abc::swap(){
    temp = a;
    a = b;
    b = temp;

}

void Abc::print(){
    cout << endl << "value of A & b is : " << a << "   " << b;
}


int main(void){

    Abc obj;
    obj.input();
    obj.print();
    cout << endl << endl  << "After swap" << endl ;
    obj.swap();
    obj.print();

    return 0;
}