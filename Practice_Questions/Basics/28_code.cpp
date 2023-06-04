// W.A.P to show the concept of Dynamic Constructor.

// Dynamically we change the size of the constructor.

#include <iostream>
using namespace std;

class Abc{
    private:
        int * num;
    public: 
        Abc(){
            num = new int[5]{1,2,3,4,5};
        }
        void print(){
            for(int i = 0 ;i < 5; i++){
                cout << num[i] << " " ;
            }
        }



};


int main(void){

    Abc obj;
    obj.print();

    return 0;

}
