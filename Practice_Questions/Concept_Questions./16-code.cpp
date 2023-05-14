//  16. W.A.P to show the concept of Parametrized constructor.


#include<iostream>
using namespace std;

class Abc{
    public:
        Abc(int a, int b){
            cout << "sum is : " << a+b << endl;
        }
};

int main(void){
    Abc abc(2,3);

    return 0;
}
