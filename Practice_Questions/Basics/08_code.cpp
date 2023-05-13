// make a program of simple interest (SI= P*R*T/100)

#include <iostream>
using namespace std;

class Abc{
    float p,r,t;
public: 
    void set(){
        cout << "Enter the Principle : " ;
        cin >> p;
        cout << "Enter the rate : " ;
        cin >> r;
        cout << "Enter the time : " ;
        cin >> t;
    }
    void si(){
        cout << "Simple Interest is : " << ((p*r*t)/100) ;
    }

};


int main(void){

    Abc obj;
    obj.set();
    obj.si();
    
    return 0;
}
