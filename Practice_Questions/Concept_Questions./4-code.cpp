// 4. W.A.P to show the concept of object as a function argument.

#include<iostream>
using namespace std;

class Abc{
    public:
        int x, y;
}obj;

void add(Abc obj){
    cout <<  "\n Sum is : " << obj.x + obj.y;
}

int main(void){
    Abc obj1;
    cout << "Enter the value of a  & b : ";
    cin >> obj.x >> obj.y;
    add(obj);

    return 0;
}