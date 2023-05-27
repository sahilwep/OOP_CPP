// Implement different types of constructors .
/*
    Constructor types :
        - Default constructor
        - Parameterized constructor
        - Copy constructor
        - Dynamic constructor
        - Multiple constructor (constructor overloading).

*/

#include<iostream>
using namespace std;

class Default{
    public:
        Default(){
            cout << "object created successfully."<< endl;   
        }
};

class Parameter{
    public:
        // parameterized constructor
        Parameter(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0){
            cout << "Sum is : " << a+b+c+d+e << endl;
        }
};

class Copy{
    private:
        string name;
    public:
        // copy constructor
        Copy(string n_){
            name = n_;
        }
        Copy(Copy &obj){
            name = obj.name;
        }
        void print(){
            cout << "Name is : " << name << endl;
        }
};

class Dynamic{
    private:
        int *x;
    public:
        // Dynamic constructor
        Dynamic(){
            x = new int[5];
            // input
            cout << endl;
            for(int i = 0; i < 5; i++){
                cout << "Enter the Dynamic value of x at index " << x[i] << " : ";
                cin >> x[i];
            }
            // display
            cout << endl<< "Values is : " ;
            for(int i = 0; i < 5; i++){
                cout <<  x[i] << " ";
            }
            cout << endl;
            cout << endl;
        }
};

class Multiple{
    public:
        // multiple constructor in class.
        Multiple(int x, int y){
            cout << "sum is : " << x + y << endl;
        }
        Multiple(int x, int y, int z){
            cout << "sum is : " << x + y + z << endl;
        }
        Multiple(int x, int y, int z, int k){
            cout << "sum is : " << x + y + z + k << endl;
        }
};

int main(void){
    
    // Default Constructor
    Default df;

    // Parameterized Constructor
    Parameter p(1,2,3,4,5);

    // Copy Constructor
    Copy c1("Sahil");
    Copy c2(c1);
    c2.print();
    
    // Dynamic Constructor
    Dynamic dy;

    // Multiple Constructor
    Multiple mul_1(1,1);
    Multiple mul_2(1,1,1);
    Multiple mul_3(1,1,1,1);

    return 0;
}