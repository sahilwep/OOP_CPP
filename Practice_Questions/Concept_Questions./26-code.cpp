// 26. W.A.P to show the concept of Destructor. 

#include<iostream>
using namespace std;

class Abc{

    public:
        Abc(){
            cout << "Object created " << endl;
        }
        ~Abc(){
            cout << "Object deleted " << endl;
        }
};

int main(void){
    Abc obj;

    return 0;
}