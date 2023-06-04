// W.A.P to show the concept of overriding. 

// with overriding we can change the functionality of operators to do what we want..
// example of adding complex no's.

#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            imag = i;
        }
        Complex operator +(Complex const & obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void print(){
            cout << endl <<  "\n Sum of complex no's is : " << real << " + i" << imag;
        }
};

int main(void){
    Complex c1(3,1);
    Complex c2(1,4);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}
