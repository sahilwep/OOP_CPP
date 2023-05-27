// constructor overloading.

#include <iostream>
using namespace std;

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
    Multiple obj(1,1);
    Multiple obj_1(1,1,1);
    Multiple obj_2(1,1,1,1);

    return 0;
}