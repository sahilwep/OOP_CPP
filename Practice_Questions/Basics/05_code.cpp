// print table of any no..., declaring function outside the class.

#include <iostream>
using namespace std;

class Abc{
private:
    int num;
public:
    void set();
    void fact();
};

void Abc::set(){
    cout << "Enter the no : ";
    cin >> num;
}

void Abc::fact(){
    for(int i = 1; i <= 10;i++){
        cout << endl << num << " * " << i << " = " << i*num;   
    }
}

int main(void){

    Abc obj;
    obj.set();
    obj.fact();


    return 0;
}