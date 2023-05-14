//  15. W.A.P to show the concept of Default constructor.

#include<iostream>
using namespace std;

class Abc{
    public:
        Abc(int a = 0){
            cout << "value is : " << a;
        }
};

int main(void){
    Abc abc(2);
    
    return 0;
}
