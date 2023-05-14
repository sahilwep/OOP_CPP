// 23. W.A.P to show the concept of Dynamic initialization of object & constructor. 

#include<iostream>
using namespace std;

class Abc{
    private:
        int *ptr;
    public:
        Abc(){
            ptr = new int[10]{1,2,3,4,5};
            cout << "Object Created.." << endl;
        }
        void print(){
            for(int i = 0 ; i<5 ; i++){
                cout << ptr[i] << " ";
            }
        }
};

int main(void){

    Abc *obj;
    obj = new Abc[3];

    cout << endl;
    obj[0].print();
    cout << endl;
    obj[1].print(); 
    cout << endl;
    obj[2].print(); 
    cout << endl;
    
    return 0;
}

