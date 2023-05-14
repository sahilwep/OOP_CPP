// 7. W.A.P to show the concept of inline function in class & object as an argument of that function.

#include<iostream>
using namespace std;

class Abc{
    private:
        int a,b;
    public:
        void set();
        int add(Abc obj);
}obj;

void Abc::set(){
    cout << "\n Enter the value of a & b : ";
    cin >>a >> b; 
}

inline int Abc::add(Abc obj){
    return (obj.a+obj.b);
}

int main(void){
    obj.set();
    cout << "\n Sum of a & b is : " << obj.add(obj) ;
    
}

