//  W.A.P to find reverse of a no by defining function outside the class.

#include <iostream>
using namespace std;


class Abc{
    private:
        int num;
        int rem;
        int result;
    public:
        void input();
        void rev();
        void print();
};

void Abc::input(){
    cout << endl << "Enter the no : ";
    cin >> num;
}

void Abc::rev(){
    result = 0;
    rem = 0;
    while(num != 0){
        rem = num % 10;
        result = result * 10 + rem;
        num = num / 10;
    }
}

void Abc::print(){
    cout << endl << "The Reversed no is : " << result;
}

int main(void){
    Abc obj;
    obj.input();
    obj.rev();
    obj.print();

    return 0;
}