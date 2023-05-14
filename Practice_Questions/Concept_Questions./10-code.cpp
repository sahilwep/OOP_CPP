// 10. W.A.P to show the concept of Static variable inside static functions.

#include <iostream>
using namespace std;

class Abc{
    public:
        static string name;
        static void display();
};

void Abc::display(){
    cout << "Name : " << Abc::name << endl;
}

// this is important to access the static members..
string Abc::name = "";

int main(void){
    Abc::name = "Sahil";
    Abc::display();
    
    return 0;
}

// here we can access the static member and function without creating an object.
// Static variable and function are accessible to all the class.