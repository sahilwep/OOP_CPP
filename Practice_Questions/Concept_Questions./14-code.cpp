// 14. W.A.P to show the concept of Constructor.

#include<iostream>
using namespace std;

class Abc{
    public:
        Abc(){
            cout << "constructor called";
        }
};

int main(void){
    Abc obj;

    return 0;
}