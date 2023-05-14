#include<iostream>
using namespace std;

class Abc{
    private:
        int x;
        int y;
    public:
        Abc(int a, int b){
            x = a;
            y = b;
        }
        void sum(){
            cout << "Sum is : " << x+y;
        }
};

int main(){
    Abc obj(1,1);
    obj.sum();

    return 0;
}
