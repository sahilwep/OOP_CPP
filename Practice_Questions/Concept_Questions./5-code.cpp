// 5. W.A.P to show the concept of object as a function argument in class.

#include<iostream>
using namespace std;

class Abc{
    private:
        int x,y;
    public:
        void set(){
            cout << "Enter The value of x & y : ";
            cin >> x >>  y;
        }
        void sum(Abc obj1){
            cout << "\n Sum of x & y is : " << obj1.x + obj1.y;
        }
}obj;

int main(void){
    obj.set();
    obj.sum(obj);

    return 0;
}