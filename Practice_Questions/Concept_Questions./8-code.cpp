// 8. W.A.P to show the concept of Friend function.

#include<iostream>
using namespace std;

class Abc{
    private:
        int pri_var;
    protected:
        int prot_var;
    public:
        Abc(){
            pri_var = 10;
            prot_var = 20; 
        }
        friend void friend_func(Abc obj);
};

void friend_func(Abc obj){
    cout << "\n private variable : " << obj.pri_var;
    cout << "\n protected variable : " << obj.prot_var;
}

int main(void){
    Abc obj1;
    friend_func(obj1);

    return 0;
}