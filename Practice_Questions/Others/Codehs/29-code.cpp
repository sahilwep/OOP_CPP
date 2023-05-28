//  Implement multilevel inheritance with constructor and do it with real world example.

#include <iostream>
using namespace std;

// multilevel inheritance
class Software{
    public:
        Software(){cout << endl << "Software class";}
};

class Ver_1:public Software{
    public:
        Ver_1(){cout << endl << "Version_1 class";}
};

class Ver_2:public Ver_1{
    public:
        Ver_2(){cout << endl << "Version_2 class";}
};


int main(void){

    Ver_2 app;
         
    return 0;
}