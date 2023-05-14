// 18. W.A.P to show the concept of Multiple constructor.

#include<iostream>
using namespace std;

class add{
    public:
        // multiple constructor is also known as constructor overloading
        add(int a, int b){
            cout << "sum of passed number is : " <<  a+b << endl;
        }
        add(int a, int b, int c){
            cout << "sum of passed number is : " <<  a+b+c << endl;
        }
        add(int a, int b, int c, int d){
            cout << "sum of passed number is : " <<  a+b+c+d << endl;
        }
        add(int a, int b, int c ,int d, int e){
            cout << "sum of passed number is : " <<  a+b+c+d+e << endl;
        }
};

int main(void){

    add obj1(1,1);
    add obj2(1,1,1);
    add obj3(1,1,1,1);
    add obj4(1,1,1,1,1);

    return 0;
}