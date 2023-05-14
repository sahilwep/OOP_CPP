// 12. W.A.P to show the concept of Operator overloading (complex addition).

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            imag = i;
        }
        Complex operator+(Complex const& obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void print(){
            cout << "Sum of two complex no is : " <<  real << " +i" << imag << endl;
        }
};

int  main(void){
    Complex c1(1,2);
    Complex c2(3,5);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}


