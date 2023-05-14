//  W.A.P to show the concept of Dynamic initialization of object using constructor arguments?
#include<iostream>
using namespace std;

class Simple_interest{
    private:
        float principle, time,  rate, interest = 0;
    public:
    Simple_interest(float a,float b,float c){
        principle=a;
        time=b;
        rate=c;
        cout << "Object created " << endl;
    }
    void print(){
        interest = (principle*rate*time) / 100;
        cout << "Interest is : " << interest << endl;
    }
};

int main(){
    float p,r,t;
    cout << endl << "Enter principle : ";
    cin >> p;
    cout << endl << "Enter rate : ";
    cin >> r;
    cout << endl << "Enter time : ";
    cin >> t;

    Simple_interest s1(p,t,r);
    s1.print();

    return 0;
}

// code is complex...