// 17. Implement Inline and Friend Functions.
/*
-Story :
    Friend function help us to access the private and protected member outside the class.
    Inline function help us to control the flow of program by copy the function definations to function call to optimize the performance.  
*/

#include<iostream>
using namespace std;

class Abc{
    private:
        int pri_mem = 10;
    protected:
        int prot_mem = 20;
    public:
        void print();
        friend void fri_func(Abc obj);
}obj;

// deceleration of inline function outside the class;
inline void Abc::print(){
    cout << "This is inline function " << endl;
}

// deceleration friend function outside the class.
void fri_func(Abc obj){
    cout << "Private member is : " << obj.pri_mem << endl;
    cout << "Protected member is : " << obj.prot_mem << endl;
}


int main(void){

    obj.print();
    fri_func(obj);

    return 0;
}