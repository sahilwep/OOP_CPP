//  W.A.P to show the concept of constructor and destructor.

#include <iostream>
using namespace std;

class Abc{

    public:
        Abc(){
            cout << endl << "object created.";
        }
        ~Abc(){
            cout << endl << "Object deleted.";
        }

};


int main(void){

    Abc obj;

    return 0;
}

