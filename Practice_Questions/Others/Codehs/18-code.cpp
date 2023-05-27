//  Implement static data members & static functions.

/*
    static member declare only once in program
    to call static function, there is no need to create an object.
*/

#include <iostream>
using namespace std;

class Abc{
    public:
        Abc();
        static string name;
        static void print(){
            cout << "Name is : " << Abc::name << endl;
        }
        static void use(){
            // What, when this function call the value of x will be 0 right, ( NO ) remember static member initialize only once..
            static int x = 0;
            cout << "no is : " << x << endl; 
            x++;
        }
};

string Abc::name = "";

int main(void){

    Abc::name = "sahil";
    Abc::print();

    // use of static function 
    cout << "Use of static function" << endl ; 
    for(int i = 0 ;i <= 5; i++){
        Abc::use();
    }

    return 0;
}