// Write a program to find the sum of two complex numbers using class using object as function argument and returning object.


#include<iostream>
using namespace std;

class Complex{
    private:
        int real,imag;
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
            cout << "Sum of complex no is : " << real << " + " << imag << "i ";
        }
};

int main(void){

    Complex c1(2,4);
    Complex c2(4,3);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}